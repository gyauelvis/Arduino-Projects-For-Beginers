const int soundSensorPin = A0;   // sound sensor is connected to analog pin A0
const int buzzerPin = 9;         // buzzer is connected to digital pin 9

void setup() {
  // set the buzzer pin as an output
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // read the value from the sound sensor
  int soundSensorValue = analogRead(soundSensorPin);

  // if the value is above a certain threshold, turn on the buzzer
  if (soundSensorValue > 500) {
    digitalWrite(buzzerPin, HIGH);
  }
  // otherwise, turn off the buzzer
  else {
    digitalWrite(buzzerPin, LOW);
  }

  // delay for a short period of time
  delay(50);
}
