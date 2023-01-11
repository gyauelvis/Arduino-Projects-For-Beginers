int buzzPin = 6; //Connect Buzzer to Digital Pin6
int inputPin = 9; // Connect Touch sensor to Digital Pin 9
int currentTouchState = 0;
int oldTouchState=0;
int buzzState;
void setup() {
pinMode(buzzPin, OUTPUT); // declare buzzer as output
pinMode(inputPin, INPUT); // declare Touch sensor as input
}
void loop() {
  currentTouchState = digitalRead(inputPin); // read input
  buzzState = digitalRead(buzzPin);
  if(currentTouchState==1 && oldTouchState==0){
    if(buzzState == HIGH){
        digitalWrite(buzzPin, LOW);
     }else{
      digitalWrite(buzzPin, HIGH);
     }
  }
  delay(500);
  currentTouchState = oldTouchState;
}
