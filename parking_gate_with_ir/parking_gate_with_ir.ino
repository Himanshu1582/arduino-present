#include <Servo.h>
 Servo myservo; 
 int in = 7;
int pos = 0; 
void setup() 
{
  myservo.attach(8); 
  pinMode(7,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop()
{
   int IR = digitalRead(in); 


      if (IR == LOW)
      {digitalWrite(9,HIGH);
       digitalWrite(10,LOW);
  {
    for(pos = 0; pos <= 90; pos += 1) 
  { 
    myservo.write(pos); 
    delay(20); 
  }
  delay(3000);
  
  for(pos = 90; pos>=0; pos-=1) 
  {
    myservo.write(pos);
    delay(20);

  }
    delay(1000);
  }}
  digitalWrite(9,LOW);
       digitalWrite(10,HIGH);
}
 
