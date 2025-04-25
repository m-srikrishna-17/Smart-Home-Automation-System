
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
