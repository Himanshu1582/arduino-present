int input=13;
int IR=0;
boolean state1 = true;
int visitor = 0;

void setup() {
pinMode(input,INPUT);
Serial.begin(9600);
}

void loop() 
{
  IR=digitalRead(input);

  if(!IR && state1)
  {
    visitor++;
    state1=false;
    Serial.print("person inside room => ");
    Serial.println(visitor);
    delay(100);
    
  }

  if(!IR ==LOW)
  {
    state1=true;
    delay(100);
  }
 

}
