#include <ESP8266WiFi.h>
#include <ThingESP.h>

ThingESP8266 thing("HimanshuRana", "THREELEDCONTROL", "HimanshuRana");

int LED = D5;
int LED2 = D6;
int LED3 = D7;


unsigned long previousMillis = 0;
const long INTERVAL = 6000;  

void setup()
{
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  thing.SetWiFi("realme narzo 20 Pro", "z74di62u");
  thing.initDevice();
}


String HandleResponse(String query)
{
  if (query == "led on") {
    digitalWrite(LED, 1);
    return "Done: LED Turned ON";
  }

  else if (query == "led off") {
    digitalWrite(LED, 0);
    return "Done: LED Turned OFF";
  }

//else if (query == "led status")
 //return digitalRead(LED) ? "LED is on" : "LED is off";
 // else return "Your query was invalid..";


  if (query == "led2 on") {
    digitalWrite(LED2, 1);
    return "Done: LED2 Turned ON";
  }

  else if (query == "led2 off") {
    digitalWrite(LED2, 0);
    return "Done: LED2 Turned OFF";
  }

 // else if (query == "ledtwo status")
    //return digitalRead(LED2) ? "LED is on" : "LED is off";
  //else return "Your query was invalid..";


  if (query == "led3 on") {
    digitalWrite(LED3, 1);
    return "Done: LED3 Turned ON";
  }

  else if (query == "led3 off") {
    digitalWrite(LED3, 0);
    return "Done: LED3 Turned OFF";
  }

 else if (query == "led3 status")
  return digitalRead(LED3) ? "LED is on" : "LED is off";
  else return "Your query was invalid..";

}


void loop()
{
  thing.Handle();

}
