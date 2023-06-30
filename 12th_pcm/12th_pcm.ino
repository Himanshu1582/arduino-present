void setup() {
 pinMode (13,OUTPUT);
 

 

}

void loop() {

digitalWrite (13,HIGH);
delay(50);
digitalWrite(13,LOW);
delay(500);
digitalWrite (13,HIGH);
delay(200);
digitalWrite(13,LOW);
delay(100);
digitalWrite (13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(1000);
}
