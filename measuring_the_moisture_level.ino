int waterSensorPin = A0;
int buzzerPin = 6;
int waterLevel;
void setup() {
  // put your setup code here, to run once:
  pinMode(waterSensorPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  waterLevel = analogRead(waterSensorPin);
  Serial.println(waterLevel);
  if(waterLevel >= 200){
    digitalWrite(buzzerPin,HIGH);
  }else{
    digitalWrite(buzzerPin,LOW);
  }

  delay(500);
}
