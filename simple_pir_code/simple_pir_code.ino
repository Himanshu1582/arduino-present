
int ledPin = 12; 
int ledPin1 = 11;               
int inputPin = 2;  
int pirsensor = 0;

void setup() {
  pinMode(ledPin, OUTPUT);   
  pinMode(ledPin1, OUTPUT);    
  pinMode(inputPin, INPUT);  
  digitalWrite(ledPin, HIGH);  
  digitalWrite(ledPin1, HIGH);
  delay(500);   
  Serial.begin(9600);
}

void loop()
{
  pirsensor = digitalRead(inputPin);
  if(pirsensor == HIGH)
  {
    digitalWrite(ledPin, LOW);  
    digitalWrite(ledPin1, LOW);
    delay(30000);
   
  }
  else
      {
      digitalWrite(ledPin, HIGH);  
      digitalWrite(ledPin1, HIGH);
      delay(200);
      }
  }
