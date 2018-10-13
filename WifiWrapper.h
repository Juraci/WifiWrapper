#ifndef WifiWrapper_h
#define WifiWrapper_h

#include <Arduino.h>
#include <ESP8266WiFi.h>

class WifiWrapper {
  char* ssid;
  char* password;
  int wifiDelay;
  public:
    WifiWrapper();
    WifiWrapper( char*, char* );
    WifiWrapper( char*, char*, int );
    void waitForConnection();
};

#endif
