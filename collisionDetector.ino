int ledpin=6;// set LED to D6
int inpin=9;// set sensor to D9
int val;// define variable val
void setup(){
pinMode(ledpin,OUTPUT);// set pin LED as output
pinMode(inpin,INPUT);// set collision sensor as input
}

void loop() {
// put your main code here, to run repeatedly:
val=digitalRead(inpin);// read value on pin 9 and assign it to val
if(val==HIGH)// check if the switch on the module if in closed state; if Yes, turn on LED
{ digitalWrite(ledpin,LOW);}
else
{ digitalWrite(ledpin,HIGH);}

}
