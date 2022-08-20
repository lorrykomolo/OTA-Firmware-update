

#define MDASH_APP_NAME "MinimalApp"
#include <mDash.h>

#include <WiFi.h>

#define WIFI_NETWORK "********************"
#define WIFI_PASSWORD "******************"
#define DEVICE_PASSWORD "****************"
const int ledPin = 22;

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_NETWORK, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    pinMode(ledPin,OUTPUT);
  }
  Serial.println("\nWiFi connected, IP address:");
  Serial.println(WiFi.localIP());
  mDashBegin(DEVICE_PASSWORD);
}

void loop() {
  digitalWrite(ledPin,HIGH);
  delay(500);
  
  digitalWrite(ledPin,LOW);
  delay(500);
}
