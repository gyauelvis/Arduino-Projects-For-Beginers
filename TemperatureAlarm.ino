int buzzPin = 9;int ledpin= 6;int tempSensor = A0;
void setup(){
Serial.begin(9600);// Set Baud Rate to 9600 bps
pinMode(ledpin,OUTPUT);// define LED as output
pinMode(buzzPin,OUTPUT);// define buzzer as output }
void loop(){ 
  int val;
  int dat;
  val=analogRead(tempSensor);// Connect LM35 on Analog 0
  dat=(500 * val) /1024; // Converting the Temperature value to Celcious
  Serial.print("Temp:"); // Display the temperature on Serial monitor
  Serial.print(dat); 
  Serial.println("C");
  if (dat>25){ // when temperature is higher than 25℃, LED will be turned on, and buzzer will ring
  digitalWrite(buzzPin, HIGH); // turn buzzer ON
  digitalWrite(ledpin, HIGH); // turn LED ON 
 }
else{
  digitalWrite(buzzPin, LOW); // turn buzzer OFF
  digitalWrite(ledpin, LOW); // turn LED OFF
}
  delay(500);
}
