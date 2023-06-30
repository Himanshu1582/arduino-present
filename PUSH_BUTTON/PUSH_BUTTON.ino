int input = 13;
int LED = 8;
int button;

void setup() {
  pinMode(input,INPUT);
  pinMode(LED,OUTPUT);

}

void loop() {
  button=digitalRead(input);
  if(button==HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }

}
