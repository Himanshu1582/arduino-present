#define BLYNK_TEMPLATE_ID "TMPLMlVDDM9W"
#define BLYNK_DEVICE_NAME "Himanshu Rana"
#define BLYNK_AUTH_TOKEN "x4mPNqa-bGEAY3Is8-oF1SbD_7B8KPSH"



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
