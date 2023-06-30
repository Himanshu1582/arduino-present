int SensorPin = 2;
int OutputPin = 8;

void setup() {
  pinMode(OutputPin, OUTPUT);
  pinMode(SensorPin, INPUT);
  digitalWrite(OutputPin, HIGH); 
  Serial.begin(9600);
}

void loop() {
  int SensorValue = digitalRead(SensorPin);
  
  Serial.print("SensorPin Value: ");
  Serial.println(SensorValue);
  delay(100);
   if (SensorValue==HIGH){ // LOW MEANS Object Detected
    digitalWrite(OutputPin, LOW);
    delay(200);
    digitalWrite(OutputPin, HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(OutputPin, HIGH); 
  }
}
