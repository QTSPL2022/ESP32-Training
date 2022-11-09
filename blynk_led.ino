#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

//Enter your Auto token
char auth[] = "tjxYP_SGEOtVJxfGZ8nAbrzrIu0BIF2d";       // You should get Auth Token in the Blynk App.

//Enter your ssid & password
char ssid[] = "Avadhutk";                    // Your Wi-Fi Credentials
char pass[] = "avadhutkulkarni77";

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass,"blynk.cloud",80);

}

void loop() {
 Blynk.run();

}
