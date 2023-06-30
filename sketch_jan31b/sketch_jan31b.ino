#define BLYNK_TEMPLATE_ID "TMPL8uwVa5-A"
#define BLYNK_DEVICE_NAME "Himanshu Rana"
#define BLYNK_AUTH_TOKEN "jvtEvgopFzLseAuG3oEcgEiip0i5_AR7"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "realme narzo 20 Pro";
char pass[] = "z74di62u";

BlynkTimer timer;
#define sensor A0
void setup() {

  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  timer.setInterval(100L, soilMoistureSensor);
}
void soilMoistureSensor() {
  int value = analogRead(sensor);
  value = map(value, 0, 1024, 400, 730);
//  value = (value - 100) * -1;

  Blynk.virtualWrite(V0, value);
}
void loop() {
  Blynk.run();
  timer.run();
}
