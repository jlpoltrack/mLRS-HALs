// Requires 3.1.6 of AMBD Core
// Ringbuffer.h needs to be edited to redefine serial buffer size to 2048 bytes

#include "WiFi.h"

char ssid[] = "mLRS 5.8";     // Set the AP's SSID
char pass[] = "mlrspass";     // Set the AP's password
char channel[] = "128";       // Set the AP's channel

//int status = WL_IDLE_STATUS;  // Wifi status

char buffer[256];             // Working buffer

WiFiServer server(5760);      // MP Port

void serialFlushRx(void) {
  while (Serial1.available() > 0) {
    Serial1.read(); 
    }
}


void setup() {
  Serial.begin(115200);       // USB Port, used for debug
  Serial1.begin(230400);      // Connection to the stream
  
  pinMode(PA12, OUTPUT);      // Red LED, for power
  digitalWrite(PA12, 1);      // Turn it on
  pinMode(PA14, OUTPUT);      // Green LED, for connection

  // This is necessary for some reason
  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    while (true);
  }

  WiFi.apbegin(ssid, pass, channel);
  delay(500);
  server.begin();
  delay(500);
}

void loop() {
  WiFiClient client = server.available();

  while (client.connected()) {
    digitalWrite(PA12, 0);    // Red LED off
    digitalWrite(PA14, 1);    // Green Led on
    
    if (client.available()) {
      memset(buffer, 0, 256);
      int n = client.read((uint8_t*)(&buffer[0]), sizeof(buffer));
      Serial1.write(buffer, n);
    }

    if (Serial1.available() > 128) {
      memset(buffer, 0, 256);
      int n = Serial1.readBytes((uint8_t*)(&buffer[0]), sizeof(buffer));
      client.write(buffer, n); 
    }
  }

  digitalWrite(PA14, 0);  // Green Led off
  digitalWrite(PA12, 1);  // Red LED on
  
  client.stop();          // No connection
  serialFlushRx();        // Empty the serial buffer
}