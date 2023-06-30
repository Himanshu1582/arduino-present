#include <Servo.h>

Servo ablservo;
int pos = 0;
void setup() {
ablservo.attach(8);

}

void loop() {

  for(pos = 0;pos<=179;pos++)
  {
    ablservo.write(pos);
    delay(15);
  }
  for(pos =180;pos>=1;pos--)
  {
    ablservo.write(pos);
    delay(15);
  }

}
