const int buzzNo = 5;//Variables for the buzzer
const int potNo = A3; //Variable for the potentiometer
int potVal; //variable that will be holding the potentiometer readings.
float V; //variable for the calc value
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
pinMode(potNo,INPUT);
pinMode(buzzNo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potNo); //Assigning potVal to the potentiometer reading
  V = (5.0/1023.0)*potVal; // Calculation to convert it to our 0 - 5
  delay(100);
  // loop telling arduino that while the V is above 4, the buzzer should make a sound
    while(V > 4){
      digitalWrite(ledNo,HIGH);
      digitalWrite(buzzNo,HIGH);
      delay(100);
      digitalWrite(buzzNo,LOW);
      digitalWrite(ledNo,LOW);
      delay(100);
    }
}
