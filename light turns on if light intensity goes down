const int photovoltaicPin = A0;  // photovoltaic cell is connected to analog pin A0
const int ledPin = 13;           // LED is connected to digital pin 13

void setup() {
  // set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the photovoltaic cell
  int photovoltaicValue = analogRead(photovoltaicPin);

  // if the value is below a certain threshold, turn on the LED
  if (photovoltaicValue < 200) {
    digitalWrite(ledPin, HIGH);
  }
  // otherwise, turn off the LED
  else {
    digitalWrite(ledPin, LOW);
  }

  // delay for a short period of time
  delay(50);
}
