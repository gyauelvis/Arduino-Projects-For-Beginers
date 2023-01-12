const int flamePin = 9; // the number of the flame pin
const int buzzPin = 6; // the number of the buzzer pin
// variables will change:
int State = 0; // variable for reading status
void setup(){
  // initialize the buzzer pin as an output:
  pinMode(buzzPin, OUTPUT);
  // initialize the flame pin as an input:
  pinMode(flamePin, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  // read the state of the value:
  State = digitalRead(flamePin);
  if(State == HIGH){
  // turn buzzer off:
  digitalWrite(buzzPin, LOW);
  }else{
  // turn buzzer on:
  digitalWrite(buzzPin, HIGH);
  }
}
