#include <Servo.h>

Servo ablservo;

void setup() {
ablservo.attach(8);

}

void loop() {
ablservo.write(0);
delay(1000);
ablservo.write(90);
delay(1000);
ablservo.write(180);
delay(1000);
}
