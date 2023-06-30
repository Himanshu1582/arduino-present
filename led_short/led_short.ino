int led1=7;
int led2=8;
int led3=9;
int led4=10;
void setup()
{
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() 
{
for(int i=0;i<=150;i+=30)
{
digitalWrite(led1,HIGH);
delay(i+20);
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delay(i+20);
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
delay(i+20);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
delay(i+20);
digitalWrite(led3,HIGH);
delay(i+20);
digitalWrite(led2,HIGH);
delay(i+20);
digitalWrite(led1,HIGH);
delay(i+20);
digitalWrite(led4,LOW);
delay(i+20);
digitalWrite(led3,LOW);
delay(i+20);
digitalWrite(led2,LOW);
delay(i+20);
digitalWrite(led1,LOW);
}


}
  
