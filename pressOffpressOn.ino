//unchangeable variables for the ledport and the pushbutton
const int ledNo = 9;
const int pushBtn = 6;
//var for the last State of the push button
int lastState = 0;
//var for the current state of the push button
int buttonState = 0;
//var for the number of press on the push button
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledNo,OUTPUT);
  pinMode(pushBtn,INPUT);
  Serial.begin(9600);
}s

void loop() {
  // put your main code here, to run repeatedly:
  //seting the digital state of the push button to the button state
  buttonState = digitalRead(pushBtn);
  //checking if lastState var == buttonState which will not be the same for the first time
  // this is because when the push btn is not pressed its state = 1
  // when it is pressed it state becomes 0
  if(lastState != buttonState){
    //check if buttonState is = 1
    if(buttonState == HIGH){
      //if it is 1 then add one to the counter var
      counter ++;
    }
  }
  delay(100);
  //setting the last state to the button state now so that when it loops 
  //through again and the push button ahs not been pressed it will run false so it will not run the if function
  lastState = buttonState;
  // you just need to press the push button once because once you run it the first if function
  // run true so the counter is already = 1 so pressing it again will make it two
  // the counter % 2 == 0
  if(counter % 2 == 0){
     digitalWrite(ledNo,HIGH);
   }else{
     digitalWrite(ledNo,LOW);
   }
}
