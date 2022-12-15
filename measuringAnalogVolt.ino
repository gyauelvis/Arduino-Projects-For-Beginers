//Measuring Analog Voltages

//setting our variables
int pinNo = A2;
int readVal = 0;
// V needs to be declared using float since it will be measuring decimal values too but not just integers
float V = 0;
int delayTime = 1000;

void setup(){
  pinMode(pinNo,INPUT);
  pinMode(7,OUTPUT);
  //Setting the serial monitor for display
  Serial.begin(9600);
}

void loop(){
  //the analog Votlages are read and assigned the readVal var
  readVal = analogRead(pinNo);
  //Arduino displays its values using the scale 2^10 which contains two 0 - 1023
  //0 volts corresponds 0
  // 5 to 1023
  //So converting it to the form we understand hence the math below
  //But the decimal points are attached so that it does not just do only integer calculation
  //In integer calc 5/1023 is 0
  V = (5./1023.)*readVal;

  //telling the serial monitor to print the values of V but to a new line everytime
  Serial.println(V);
  
  //before doing it again it should wait for this long 
  delay(delayTime);
}
