#include <Servo.h>

Servo ablservo;
int pos = 0;
int input = 2;
int IR = 0;


void setup() {
ablservo.attach(8);
pinMode(input,INPUT);

}

void loop() {
   IR = digitalRead(input);

if(!IR==HIGH)   //when we have any sensor with inverted output we can use sign ! before the variable//
  {
      for(pos = 0;pos<=89;pos++)
      {
        ablservo.write(pos);
        delay(15);
      }
      delay(3000);
      
      for(pos =90;pos>=1;pos--)
      {
        ablservo.write(pos);
        delay(15);
      }
  }
}
