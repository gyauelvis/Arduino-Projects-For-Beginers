// Using the pushButton Sensor to Blink the LED 

//Setting the variable
int pinNo = 9;
int pushBtn = 5;

void setup(){
  //every code written here runs only ones:

  //pinMode() function tells the board that a certain device is connected to a given number and its either an OUTPUT or INPUT
  pinMode(pinNo,OUTPUT);
  pinMode(pushBtn,INPUT_PULLUP);
}

void loop(){
  //every code written here runs forever:

  //pushBtn is either pushed(0 or LOW) or released(1 or HIGH)
  // The digitalRead() function here reads that particular value and assigns it to the variable called pushStat
  int pushStat = digitalRead(pushBtn);

  // the digitalWrite() function gives a certain digital command to the device connected to pinNO
  //it tells the particular pinNo to perform the value recorded by the pushStat variable
  digitalWrite(pinNo,pushStat);
  
 }
