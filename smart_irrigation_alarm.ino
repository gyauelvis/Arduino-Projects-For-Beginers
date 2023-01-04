const int moisturePin = A0;  // Moisture sensor input pin
const int buzzerPin = 9;    // Buzzer output pin
const int threshold = 300;  // Threshold for triggering the buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int moistureLevel = analogRead(moisturePin);  // Read the moisture level
  if (moistureLevel < threshold) {
    digitalWrite(buzzerPin, HIGH);  // Turn on the buzzer
  } else {
    digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
  }
}
