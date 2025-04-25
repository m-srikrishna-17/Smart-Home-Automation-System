#include <DHT.h>

// Pin Definitions for Sensors
#define PIR_PIN 2         // PIR sensor -> GPIO2 (J2_7)
#define FIRE_SENSOR_PIN 4 // Fire sensor -> GPIO4 (J2_14)
#define LDR_PIN A0        // LDR sensor -> ADC_CH0 (J10_2)
#define MQ135_PIN A1      // MQ-135 sensor -> ADC_CH1 (J10_4)
#define DHTPIN 15         // DHT11 sensor -> GPIO15 (J3_4)

// Pin Definitions for Relays
#define RELAY_MOTION 5    // Relay IN1 -> Motion Control (J2_10)
#define RELAY_LIGHT 6     // Relay IN2 -> Light Control (J2_12)
#define RELAY_FIRE 7      // Relay IN3 -> Air Quality Fan Control(J2_14)

// Buzzer Pin (2-pin connection)
#define BUZZER_PIN 14     // Buzzer -> GPIO8 (J2_6)

#define DHTTYPE DHT11     // Define DHT sensor type
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor

void setup() {
    Serial.begin(115200);  // Start Serial Monitor

    // Initialize Sensors
    pinMode(PIR_PIN, INPUT);
    pinMode(FIRE_SENSOR_PIN, INPUT);
    dht.begin();  // Start DHT11 sensor

    // Initialize Relay Pins as OUTPUT
    pinMode(RELAY_MOTION, OUTPUT);
    pinMode(RELAY_LIGHT, OUTPUT);
    pinMode(RELAY_FIRE, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);  // Buzzer as output

    // Ensure Relays and Buzzer are OFF initially
    digitalWrite(RELAY_MOTION, HIGH);
    digitalWrite(RELAY_LIGHT, HIGH);
    digitalWrite(RELAY_FIRE, HIGH);
    digitalWrite(BUZZER_PIN, LOW); // Buzzer OFF initially

   // Serial.println("All Sensors, Relays & Buzzer Initialized...\n");
}

void loop() {
   
    // 🚶‍♂ PIR Sensor (Motion Detection)
    int motionState = digitalRead(PIR_PIN);
   
    // Control Relay for Motion Detection
    digitalWrite(RELAY_MOTION, motionState ? LOW : HIGH);
    
    // 🔥 Fire Sensor (Flame Detection)
    int fireState = digitalRead(FIRE_SENSOR_PIN);
   
    // Control Relay & Buzzer for Fire Detection
    if (fireState == LOW) {  // Fire Detected (LOW = Fire)
        digitalWrite(BUZZER_PIN, HIGH); // 🔊 Turn ON Buzzer
    } else {
        digitalWrite(BUZZER_PIN, LOW); // 🔇 Turn OFF Buzzer
    }

    // ☀ LDR Sensor (Light Intensity)
    int lightValue = analogRead(LDR_PIN);
    float ldrVoltage = lightValue * (3.3 / 4095.0); // Convert ADC value to voltage
    
    // ✅ REVERSED LOGIC: Turn ON Relay when it's DARK
    digitalWrite(RELAY_LIGHT, lightValue > 1500 ? LOW : HIGH);
   // Serial.println(lightValue > 1500 ? "💡 Light Relay ON (Dark)" : "⚪ Light Relay OFF (Bright)");

    // 🌫 MQ-135 Sensor (Air Quality)
    int airQualityValue = analogRead(MQ135_PIN);
    float airQualityVoltage = airQualityValue * (3.3 / 4095.0);
   
    // Categorize Air Quality
    if (airQualityValue > 1400) {
        //Serial.println("⚠ Poor Air Quality! ⚠");
        digitalWrite(RELAY_FIRE, LOW); // Turn ON fan Relay
        Serial.println("Fan Relay ON");
    } else if (airQualityValue > 700) {
        //Serial.println("😐 Moderate Air Quality.");
        digitalWrite(RELAY_FIRE, LOW); // Turn ON fan Relay
        Serial.println("Fan Relay ON");
    } else {
        //Serial.println("😊 Good Air Quality.");
        digitalWrite(RELAY_FIRE, HIGH); // Turn OFF fan Relay
        //Serial.println("Fan Relay OFF");
    }
    // 🌡 DHT11 Sensor (Temperature & Humidity)
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

Serial.print("G");
Serial.print(airQualityValue)
Serial.print("F");
Serial.print(fireState);
Serial.print("P");
Serial.print(motionState);
Serial.print("T");
Serial.print(temperature);
Serial.print("H");
Serial.print(humidity);
Serial.print("L");
Serial.print(lightValue);
Serial.print("#");

 delay(3000);  // Wait 2 seconds before next reading
}
