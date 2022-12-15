const int ledNo = 5;
const int pot = A3;

//var for reading the voltage of the potentiometer
float potVal;
//var for calculating the equivalent increase in the brightness of the LED
float ledVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledNo,OUTPUT);
  pinMode(pot,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(pot);
  // the brightest value of the LED is 255 and 1023 for the highest voltage value of the potentiometer in 2^10 scale.
  //Hence the calculation for the corresponding increase in the brightness
  ledVal = (255.0/1023.0)*potVal;
  analogWrite(ledNo,ledVal);
  delay(100);
}
