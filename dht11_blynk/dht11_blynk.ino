#define BLYNK_TEMPLATE_ID "TMPLlkbmpqwb"
#define BLYNK_DEVICE_NAME "DHT11"
#define BLYNK_AUTH_TOKEN "ou152rbGbUgJTP-wP88VmuenwgUOfnk1"



#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include "DHT.h"

DHT dht(D1 , DHT11);


char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "ATLLAB";  // Enter your Wifi Username
char pass[] = "Admin@123";  // Enter your Wifi password

int Temperature;
int Humidity;

void setup()
{

  Serial.begin(9600);

  dht.begin();

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();

  Temperature = dht.readTemperature();
  Humidity = dht.readHumidity();



  Blynk.virtualWrite(V0, Temperature);
  Blynk.virtualWrite(V2, Humidity);
  Serial.println(Temperature);
  Serial.println(Humidity);
  
  delay(1000);  
}
