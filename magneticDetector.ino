int ledPin = 6; // set LED pin to D6
int inputPin = 9; // set sensor to input pin 9
int val = 0; // define variable val
void setup() {
pinMode(ledPin, OUTPUT); // declare LED as output
pinMode(inputPin, INPUT); // declare magnetic sensor as input
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
val = digitalRead(inputPin); // read input value
Serial.println(val);
if (val == HIGH) { // check if the input is HIGH
digitalWrite(ledPin, LOW); // turn LED OFF
} else {
digitalWrite(ledPin, HIGH); // turn LED ON
}
  delay(500);
}
