int ledPin = 12; 
int ledPin1 = 11;               
int inputPin = 2;               
int pirState = LOW;             
int val = 0;                   
 
void setup() {
  pinMode(ledPin, OUTPUT);   
  pinMode(ledPin1, OUTPUT);    
  pinMode(inputPin, INPUT);     
  Serial.begin(9600);
}
 
void loop(){
  val = digitalRead(inputPin);  
  if (val == HIGH) {            
    digitalWrite(ledPin, LOW);  
    digitalWrite(ledPin1, LOW);
    if (pirState == LOW) {
      Serial.println("Motion detected!");
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, HIGH); 
    digitalWrite(ledPin1, HIGH);
    if (pirState == HIGH){
      Serial.println("Motion ended!");
      pirState = LOW;
    }
  }
}
