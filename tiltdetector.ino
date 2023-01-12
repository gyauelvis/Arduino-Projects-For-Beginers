int ledPin = 6; // Connect LED to pin 6
int tilt = 9; // Connect Tilt sensor to Pin9
void setup()
{
pinMode(ledPin, OUTPUT); // Set digital pin 11 as output
pinMode(tilt, INPUT); // Set digital pin 9 as input
}
void loop()
{
if(digitalRead(tilt)==HIGH) //Read sensor value
{
digitalWrite(ledPin, HIGH); // Turn on LED when the sensor is triggered
}
else
{
digitalWrite(ledPin, LOW); // Turn off LED when the sensor is not triggered
}
delay(500);
}
