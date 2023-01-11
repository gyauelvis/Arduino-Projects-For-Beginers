int Led=6;//define LED interface
int knock=9;//define knock sensor interface;
int val;//define digital variable val
void setup()
{
pinMode(Led,OUTPUT);//define LED pin to be output
pinMode(knock,INPUT);//define knock sensor pin to be input
}
void loop(){
val=digitalRead(knock);// read the value of interface 9 and assign it to val
if(val==HIGH){// when the knock sensor detect a signal, LED will turn on
digitalWrite(Led,LOW);
}else{
digitalWrite(Led,HIGH);
delay(1000);
}
}
