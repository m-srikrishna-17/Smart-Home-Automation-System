# 🏡 IoT-Powered Smart Home Automation System

This repository presents the design and implementation of an IoT-powered Smart Home Automation System using various sensors and IoT platforms. It leverages real-time monitoring, automation and remote control to enhance home safety, energy efficiency and convenience.

## Contents
- [Introduction](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Introduction)
- [Overview](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Overview)
- [Goals and Objectives](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Goals-and-Objectives)
- [Target Audience](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Target-Audience)
- [Key Features](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Key-Features)
- [Technical Approach](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Technical-Approach)
- [Required Components and Bill of Materials](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Required-Components-and-Bill-of-Materials)
- [Block Diagram](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Block-Diagram)
- [Circuit Diagram](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Circuit-Diagram)
- [Pin Connections](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Pin-Connections)
  - [MQ-135 Air Quality Sensor](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#1-MQ-135-Air-Quality-Sensor)
  - [DHT11 Temperature & Humidity Sensor](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#2-DHT11-Temperature--Humidity-Sensor)
  - [HC-SR501 PIR Sensor](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#3-HC-SR501-PIR-Sensor)
  - [ADIY Flame Sensor Module](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#4-ADIY-Flame-Sensor-Module)
  - [Light Dependent Resistor (LDR) Module](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#5-Light-Dependent-Resistor-LDR-Module)
  - [5V Piezoelectric Buzzer](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#6-5V-Piezoelectric-Buzzer)
  - [ESP8266 Wi-Fi Module](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#7-ESP8266-Wi-Fi-Module)
- [Working Code](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Working-Code)
- [Appliation Video](https://github.com/Sree-Vishnu-Varthini/Smart-Home/blob/master/README.md#application-video)
   - [Fire Alarm](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Fire-Alarm)
   - [Light Intensity Control (Light ON/OFF)](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Light-Intensity-Control-(Light-ON/OFF))
   - [Ventilation](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Ventilation)
   - [Motion Detection](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Motion-Detection)
   - [Thingspeak Monitoring](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Thingspeak-Monitoring)
- [Contributors](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Contributors)
- [Acknowledgements](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Acknowledgements)
- [Contact Information](https://github.com/Sree-Vishnu-Varthini/Smart-Home/#Contact-Information)

## Introduction

In today's world, managing home safety, energy efficiency and convenience can be challenging. Many homes lack an integrated system to automate daily tasks like adjusting lighting, monitoring air quality, detecting gas leaks and responding to environmental changes. This project introduces an IoT-powered smart home system that makes your living space safer, smarter and more efficient.

Traditional home management relies heavily on manual operation of lighting, ventilation and security systems. Homeowners must physically switch appliances on and off, monitor air quality through observation and rely on standalone smoke or gas detectors without centralized control. This fragmented approach often results in energy wastage, delayed hazard detection and overall inconvenience, making home management inefficient and at times, unsafe.

In contrast, the IoT-Powered Smart Home Automation System offers a modern, integrated solution to these challenges. It enables real-time monitoring, automation and remote control through IoT connectivity. By streamlining home management, the system improves safety, reduces energy consumption and simplifies daily tasks. This makes home operation more efficient, secure and convenient for homeowners.

## Overview

The IoT-Powered Smart Home Automation System is a sensor-driven, cloud-integrated solution designed to optimize energy efficiency, enhance safety and provide real-time remote monitoring for modern households. The system consists of a network of IoT-enabled sensors and actuators that continuously monitor environmental conditions and automate home functions based on real-time data analytics.

The system is structured around a central microcontroller (ARIES v3.0), which serves as the primary processing unit, collecting data from multiple sensors and executing automation commands. 

Key hardware components include:

✅ **Motion and Light Sensors** – Enable automated lighting and fan control based on occupancy and ambient lighting conditions. <br>
✅ **Temperature and Humidity Sensors** – Optimize ventilation and climate control. <br>
✅ **Fire and Smoke Detectors** – Detect leaks and fire hazards, triggering immediate safety alerts. <br>
✅ **Air Quality Sensors** – Monitor pollutants and adjust ventilation accordingly. <br>

To enable real-time data transfer and remote control, the system utilizes Thingspeak, a cloud-based IoT platform that facilitates intelligent automation of various smart home functions. A user-friendly web and mobile application, built using Thingspeak’s IoT framework and Hostinger, allows homeowners to monitor sensor data, control devices and receive instant alerts from anywhere.

In the event of a gas leak, fire or deteriorating air quality, the system immediately notifies homeowners via IOT based alerts and notifications. Additionally, automated safety measures, such as ventilation control, are activated to mitigate risks and ensure timely hazard prevention.

This seamless integration of hardware, cloud connectivity and automation enhances home security, energy efficiency and overall convenience.

## Goals and Objectives
🎯 Monitor environmental changes like air quality and respond accordingly. <br>
🎯 Automate lighting, fans and ventilation based on motion, light, temperature, and humidity. <br>
🎯 Detect gas leaks, fires, and poor air quality for early safety alerts.<br>
🎯 Send real-time notifications for critical events.<br>
🎯 Enable remote monitoring and control via IoT platforms.<br>
🎯 Help homeowners make informed decisions to reduce energy wastage and lower costs.<br>

## Target Audience

This project is designed for individuals and organizations seeking to enhance home safety, energy efficiency, and convenience through automation. The key target audiences include:
- Homeowners
- Families
- Elderly residents
- Tenants
- Property managers
- Rental Owners
- People with disabilities or mobility challenges

## Key Features
📌 Motion and light-based automation for lighting, fans, and ventilation.<br>
📌 Safety alerts for gas leaks, fires, and poor air quality.<br>
📌 Real-time energy usage data and monitoring.<br>
📌 Environmental sensors for detecting air quality, temperature, and humidity.<br>
📌 Remote monitoring and control via IoT platforms.<br>
📌 IoT based notifications for critical events.<br>

## Technical Approach
- **Hardware:** Various sensors to monitor motion, light, air quality, gas leaks, temperature and humidity.
- **Software:** IoT and cloud integration for real-time data collection, automation and remote monitoring.
- **Communication:** Wireless communication via Wi-Fi for seamless data transfer.
- **Interface:** Mobile app and Web page for remote control and monitoring.
- **Notifications:** Iot based alerts for safety events like gas leaks, fires, poor air quality, and rainfall.

## Required Components and Bill of Materials

| Item                          | Quantity | Description                                     | Links to Products | Bill of Products |
|-------------------------------|----------|-------------------------------------------------|-------------------|-------------------|
| **ARIES v3.0**          | 1        | Microcontroller board                          | [ARIES v3.0](https://robu.in/product/aries-v30-devlopment-board/) |[ARIES v3.0 Bill](https://drive.google.com/file/d/1GoBqkjM1x40hSEWVXIIVZ0Ry7tTSHpfX/view?usp=drive_link) |
| **ESP8266 Wi-Fi Module**      | 1        | Wi-Fi module for communication                 | [ESP8266 Module](https://robu.in/product/nodemcu-cp2102-board/) | |
| **MQ-135 Gas Sensor** | 1        | Air quality detection sensor                    | [MQ-135 Sensor](https://robu.in/product/waveshare-mq-135-gas-sensor/) ||
| **DHT11 Temperature & Humidity Sensor** | 1 | Measures temperature & humidity                 | [DHT11 Sensor](https://robu.in/product/dht11-temperature-and-humidity-sensor-module-with-led/) ||
| **HC-SR501 PIR Sensor**         | 1        | Detects motion                                  | [PIR Motion Sensor](https://robu.in/product/pir-motion-sensor-detector-module-hc-sr501/) ||
| **ADIY Flame Sensor Module**       | 1        | Detects flame or fire                          | [Fire Sensor](https://robu.in/product/flame-sensor-infrared-receiver-module-ignition-source-detection-module/) ||
| **Light Dependent Resistor (LDR) Module**                | 1        | Detects light intensity                         | [LDR Sensor](https://robu.in/product/5mm-ldr-sensor-photoresistor-photo-cell-100-200k-gl5549/) ||
| **5V Piezoelectric Buzzer**                    | 1        | Alarm/Alert system                             | [Buzzer](https://robu.in/product/5v-passive-buzzer/) ||
| **Jumper Wires**              | 1 set    | Male-to-male and female-to-male jumper wires   | [Jumper Wires](https://robu.in/product/20-cm-40-pin-dupont-male-male-male-female-female-female-cable-combo/) ||
| **4 Channel Relay**           | 1        | For connecting Load               | [4 Channel Relay](https://robu.in/product/4-channel-relay-module-5v-high-and-low-level-trigger-relay-module/) ||
| **Micro USB Cable**           | 1        | For programming and power supply               | [Micro USB Cable](https://robu.in/product/10-inch-micro-usb-cable-a-to-micro-b/) ||

## Block Diagram
![DIR-V HACKATHON 2](https://github.com/user-attachments/assets/d7b360af-fa94-41d3-ab6f-ab45c0b83994)

 ## Circuit Diagram

![DIR-V HACKATHON](https://github.com/user-attachments/assets/2fca989c-28d0-4fb2-8e54-e434f656eb04)

## Pin Connections

### 1] MQ-135 Air Quality Sensor
| Sensor Pin | ARIES v3.0 Pin | Function |
|-----------|---------------|----------|
| VCC | 3.3V | Power |
| GND | GND | Ground |
| AOUT (Analog Output) | ADC_CH1 (J10_4) | Air Quality Detection |

### 2] DHT11 Temperature & Humidity Sensor
| Sensor Pin | ARIES v3.0 Pin | Function |
|-----------|---------------|----------|
| VCC | 3.3V | Power |
| GND | GND | Ground |
| DATA | GPIO15 (J3_4) | Temperature & Humidity |

### 3] HC-SR501 PIR Sensor
| Sensor Pin | ARIES v3.0 Pin | Function |
|-----------|---------------|----------|
| VCC | 3.3V | Power |
| GND | GND | Ground |
| OUT | GPIO2 (J2_7) | Motion Detection |

### 4] ADIY Flame Sensor Module
| Sensor Pin | ARIES v3.0 Pin | Function |
|-----------|---------------|----------|
| VCC | 3.3V | Power |
| GND | GND | Ground |
| OUT | GPIO4 (J2_14) | Fire Detection |

### 5] Light Dependent Resistor (LDR) Module
| Sensor Pin | ARIES v3.0 Pin | Function |
|-----------|---------------|----------|
| VCC | 3.3V | Power |
| GND | GND | Ground |
| AO | ADC_CH0 (J10_2) | Light Intensity (Analog Input) |

### 6] 5V Piezoelectric Buzzer
| Sensor Pin | ARIES v3.0 Pin | Function |
|-----------|---------------|----------|
| GND | GND | Ground |
| Signal | GPIO14 (J3_5) | Alarm/Alert |

### 7] ESP8266 Wi-Fi Module
| Sensor Pin | ARIES v3.0 Pin | Function |
|-----------|---------------|----------|
| VCC | 3.3V | Power |
| GND | GND | Ground |
| TX | RX (J2_15) | Transmit Data |
| RX | TX (J2_13) | Receive Data |

## Working Code

#Tx Code

```
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

```
#Rx_code
```

#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(D2, D3); // RX, TX (Connect to TX, RX of Arduino Uno)

String receivedData = "";
int airQualityValue, fireState, motionState, temperature, humidity, lightValue;

const char* ssid     = "wifi001";
const char* password = "123456789";

const char* host = "iotprojects.org";
const char* streamId   = "....................";
const char* privateKey = "....................";

void setup() {
    Serial.begin(115200);  // Serial monitor
    mySerial.begin(9600);  // Communication with Arduino Uno
Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
}

void loop() {
    while (mySerial.available()) {
        char receivedChar = mySerial.read();
        receivedData += receivedChar;

        if (receivedChar == '#') {  // End of data packet
            parseData(receivedData);
            receivedData = "";  // Clear buffer for next data
            
 Serial.print("connecting to ");
  Serial.println(host);
  

WiFiClientSecure client;
client.setInsecure();  // Disable SSL certificate validation
const int httpsPort = 443;

if (!client.connect(host, httpsPort)) {
  Serial.println("connection failed");
  return;
}

String url = "GET https://iotprojects.org/home_automation/update.php?gas="; // Getting info from my online database through my online website
  url+=airQualityValue;
  url+="&fire=";
  url+=fireState;
  url+="&pir=";
  url+=motionState;
  url+="&temp=";
  url+=temperature;
  url+="&hum=";
  url+=humidity;
  url+="&ladr=";
  url+=lightValue;
url += " HTTP/1.1\r\nHost: iotprojects.org\r\nConnection: close\r\n\r\n";
client.print(url);

  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 5000) {
      Serial.println(">>> Client Timeout !");
      client.stop();
      return;
    }
  }
  
  
  // Read all the lines of the reply from server and print them to Serial
  while(client.available()){
    char a=client.read();
    //String line = client.readStringUntil('\r');
    //Serial.print(line);
   
    Serial.print(a);
      
    } 
    
  Serial.println();
 // Serial.println("closing connection");


        }
    }
}

// Function to parse received data
void parseData(String data) {
    airQualityValue = getValue(data, 'G', 'F');
    fireState       = getValue(data, 'F', 'P');
    motionState     = getValue(data, 'P', 'T');
    temperature     = getValue(data, 'T', 'H');
    humidity        = getValue(data, 'H', 'L');
    lightValue      = getValue(data, 'L', '#');

    Serial.print("Air Quality: "); Serial.println(airQualityValue);
    Serial.print("Fire State: "); Serial.println(fireState);
    Serial.print("Motion State: "); Serial.println(motionState);
    Serial.print("Temperature: "); Serial.println(temperature);
    Serial.print("Humidity: "); Serial.println(humidity);
    Serial.print("Light Value: "); Serial.println(lightValue);



}

// Function to extract value from the received data
int getValue(String data, char startChar, char endChar) {
    int startIndex = data.indexOf(startChar) + 1;
    int endIndex = data.indexOf(endChar);
    if (startIndex > 0 && endIndex > startIndex) {
        return data.substring(startIndex, endIndex).toInt();
    }
    return -1; // Return -1 if parsing fails
}

```
## Application Video

### Fire Alarm

https://github.com/user-attachments/assets/d61cbf85-8a01-4065-b9d7-003ee2cd630d

```bash
📢 This video demonstrates the working and implementation of a fire detection system.

➤ The flame sensor is connected to the Aries v3.0 board to detect the presence of fire.

➤ The sensor continuously monitors for flames and sends real-time data to the Arduino.

➤ The Arduino receives the sensor data and processes it accordingly.

➤ The processed data is displayed in the Serial Monitor, allowing users to observe sensor readings.

➤ When the flame sensor detects fire, it triggers an alert mechanism.

➤ The buzzer is activated as an alarm to notify individuals of the imminent danger.
```

![Fire Detection](https://github.com/user-attachments/assets/01892051-851a-424e-bbab-d0173c7e4849)

### Light Intensity Control (Light ON/OFF)

https://github.com/user-attachments/assets/d8a27665-8dd0-4c48-a1c8-66d9cad4cc77

https://github.com/user-attachments/assets/a7c87fcd-87e8-4e0f-b2f3-a0556c34ada8

```bash
📢 This video demonstrates the working and implementation of an automatic light control system using an LDR (Light Dependent Resistor) sensor.

➤ The LDR module is connected to the Aries v3.0 board to detect changes in ambient light levels.

➤ The sensor continuously monitors the surrounding light intensity and sends real-time data to the Arduino.

➤ The Arduino processes the received data and displays the readings in the Serial Monitor.

➤ When the LDR detects darkness, it triggers the blue bulb, and the lights are automatically switched on.

➤ When natural daylight is detected, the system turns off the light bulb to conserve energy.

➤ To simulate darkness in this video, the LDR sensor is covered using a box, demonstrating how the system responds in low-light conditions.
```

![Light Intensity](https://github.com/user-attachments/assets/fed29bd8-92c5-43c1-b53f-8244606c48e8)

### Ventilation

https://github.com/user-attachments/assets/8e39206d-2036-4223-8251-fb5d98c39daa

```bash
📢 This video demonstrates the working and implementation of an air quality monitoring and automation system using the MQ-135 gas sensor.

➤ The MQ-135 gas sensor module is connected to the Aries v3.0 board to detect changes in air quality.

➤ The sensor continuously monitors the surrounding air and sends real-time data to the Arduino.

➤ The Arduino processes the received data and displays the air quality readings in the Serial Monitor.

➤ When the MQ-135 sensor detects poor air quality, it triggers the incandescent filament light bulb, turning the lights on as an alert mechanism.

➤ When good air quality is detected, the system turns off the light bulb.

➤ Ideally, the light bulb will be replaced with fans or other relevant loads that help improve air quality and ventilation.

➤ In this video, the light bulb is used temporarily to demonstrate the system’s functionality.
```

![Ventilation](https://github.com/user-attachments/assets/7f73b655-8151-43f2-8948-1eaa1d40fc1a)

### Motion Detection

https://github.com/user-attachments/assets/49890077-9847-451e-918a-f1e012c9c470

```bash
📢 This video demonstrates an automated lighting system using a PIR sensor for motion-based automation.

➤ The PIR sensor module is connected to the Aries v3.0 board to detect motion from living beings.

➤ The sensor continuously monitors the surroundings and sends real-time data to the Arduino.

➤ The Arduino processes the received data and displays the readings in the Serial Monitor.

➤ When the PIR sensor detects movement, it triggers the yellow bulb, and the lights are automatically switched on.

➤ When no motion is detected, the system turns off the light bulb, conserving energy.
```

![Motion Detection](https://github.com/user-attachments/assets/db2da071-9d90-44bc-93af-8020e7e6f023)

## Contributors
- Sri Krishna M, Pre-Final Year Student, Sri Eshwar College of Engineering.
- Sree Vishnu Varthini S, Pre-Final Year Student, Sri Eshwar College of Engineering.
- Shanmuga Sanjeevi P S, Pre-Final Year Student, Sri Eshwar College of Engineering.

## Acknowledgements
- Mr. Kunal Ghosh, Director, VSD Corp. Pvt. Ltd.
- Mr. Vignesh A, Research Scholar, Sri Eshwar College of Engineering

## Contact Information
- Sri Krishna M, Pre-Final Year Student, Sri Eshwar College of Engineering, srikrishna0017@gmail.com
- Sree Vishnu Varthini S, Pre-Final Year Student, Sri Eshwar College of Engineering, sreevishnuvarthini@gmail.com
- Shanmuga Sanjeevi P S, Pre-Final Year Student, Sri Eshwar College of Engineering, shanmugasanjeevi2004@gmail.com
- Mr. Vignesh A, Research Scholar, Sri Eshwar College of Engineering, vignesh.a@sece.ac.in
- Mr. Kunal Ghosh, Director, VSD Corp. Pvt. Ltd., kunalpghosh@gmail.com
