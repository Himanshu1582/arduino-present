#define BLYNK_TEMPLATE_ID "TMPLMlVDDM9W"
#define BLYNK_DEVICE_NAME "Himanshu Rana"
#define BLYNK_AUTH_TOKEN "x4mPNqa-bGEAY3Is8-oF1SbD_7B8KPSH"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "realme narzo 20 Pro";  // Enter your Wifi Username
char pass[] = "z74di62u";  // Enter your Wifi password


void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    

}

void loop()
{
  Blynk.run(); 
}
