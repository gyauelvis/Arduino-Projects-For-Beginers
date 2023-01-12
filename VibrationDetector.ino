#define buzzPin 6
#define SensorINPUT 3 //Connect the sensor to digital Pin 3 which is Interrupt 1. 
unsigned char state = 0;
void setup() {
pinMode(buzzPin, OUTPUT);
pinMode(SensorINPUT, INPUT);
// Trigger the blink function when the falling edge is detected
attachInterrupt(1, blink, FALLING);
}
void loop() {
if (state != 0){
  state = 0;
  digitalWrite(buzzPin, HIGH);
  delay(500);
}
else
  digitalWrite(buzzPin, LOW);
}
void blink(){ //Interrupts function
  state++;
}
