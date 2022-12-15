int ledNo = 6;
int myNumber; //variable that store the value the user enter
String msg = "How bright do you want the LED to be: "; //the message that displays on the serial monitor
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //Setting the communication rate between the board and the serial monitor
  pinMode(ledNo,OUTPUT); //setting LED as output
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg); // Printing the message to the serial monitor.
  //Serial.available() checks whether the user has entered a value or not
  while(Serial.available()==0){};//loop telling the serial monitor to do nothing untill the user has entered a value
  // the Serial.parseInt() method is used to accept values from the user
  myNumber = Serial.parseInt(); //the user input is stored to myNumber var
  delay(100);//wait for 100 milliseconds
  if(myNumber >=0  && myNumber <=255 ){// check if the value the user enters is greater than 0 and less 255
     analogWrite(ledNo,myNumber);//Increase the brightness according to the value entered
  }else{
    //else print what's below
    Serial.print("Value should be greater than 0 and less than or equal to 255");
    Serial.println(msg); 
    }
}
  
