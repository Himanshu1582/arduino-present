int IR = 2;
int irValue;
boolean state = true;
int count = 0;

void setup() {
pinMode(IR,INPUT);
Serial.begin(9600);

}

void loop() {
  irValue=digitalRead(IR);
  if(!irValue&&state)
  {
    count++;
    state=false;
    Serial.println(count);
    delay(100);
  }
  if(irValue==HIGH)
  {
    state=true;
    delay(100);
  }
  
}
