#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
int pin = 2;
#define BLYNK_TEMPLATE_ID "TMPLrl3eDCTr"
#define BLYNK_TEMPLATE_NAME "ESP32"
#define BLYNK_AUTH_TOKEN "tjxYP_SGEOtVJxfGZ8nAbrzrIu0BIF2d"

char auth[] = "tjxYP_SGEOtVJxfGZ8nAbrzrIu0BIF2d";       // You should get Auth Token in the Blynk App.
char ssid[] = "Avadhutk";                    // Your Wi-Fi Credentials
char pass[] = "avadhutkulkarni77";
void setup() {  
  pinMode(pin, OUTPUT); 
  pinMode(pin, HIGH);
  Serial.begin(115200);
  delay(10);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);
  int wifi_ctr = 0;
  while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
  }
  Serial.println("WiFi connected");  
  Blynk.begin(auth, ssid, pass,"blynk.cloud",80);
}
void loop(){
    Blynk.run();
}
 
