void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(100);                       // wait for a second
  digitalWrite(13, LOW);  
  digitalWrite(11, LOW); 
  
  digitalWrite(12,HIGH);
  delay(100);
  digitalWrite(12, LOW);      
}
