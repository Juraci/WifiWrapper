#include "Arduino.h"
#include "WifiWrapper.h"
#include "ESP8266WiFi.h"

WifiWrapper::WifiWrapper() {
  ssid = "";
  password = "";
  wifiDelay = 500;
  Serial.begin(115200);
  Serial.println("No ssid and password set.");
}

WifiWrapper::WifiWrapper( char* _ssid, char* _password ) {
  ssid = _ssid;
  password = _password;
  wifiDelay = 500;
  Serial.begin(115200);
}

WifiWrapper::WifiWrapper( char* _ssid, char* _password, int _delay ) {
  ssid = _ssid;
  password = _password;
  wifiDelay = _delay;
  Serial.begin(115200);
}

void WifiWrapper::waitForConnection() {
  if(WiFi.status() == WL_CONNECTED) return;

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.print("Attempting WiFi connection...");

  while(WiFi.status() != WL_CONNECTED) {
    delay(wifiDelay);
    Serial.println(".");
  }

  Serial.println("connected");
}

