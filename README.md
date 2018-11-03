# WifiWrapper

## Goal

Thin wrapper for ESP8266WiFi library, mainly used to reduce the amount of code in the main Arduino program.

## How to use

```c++

char* ssid = "____";
char* password = "____";

WifiWrapper wifi(ssid, password);

void setup() {
  wifi.waitForConnection();
}

void loop() {
  wifi.waitForConnection();
}
```

## Details

The `waitForConnection()` method is a while loop that only exits after the connection has been established, this should be called to stablish the initial connection and also on the main loop to guarantee that the conneciton will be resstablished in case of instability.
