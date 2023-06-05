/* 
Simple traffic light simulation project for arduino

Circuit:

red, yellow and green LED connected to digital pins 4,8 & 12

created 31 May 2023
  
by Kubai Allan
*/


int red= 4;         
int yellow= 8;
int green= 12;            // declare and initiate pins 4, 8 and 12
int break1= 10000;
int break2= 3000;         // set duty cycle for controling the timings of the LEDs

void setup() {
  // put your setup code here, to run once:
  pinMode (red, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (green, OUTPUT);          // declare and initiate the pins as outputs
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (red,HIGH);
delay(break1);


digitalWrite (yellow,HIGH);
delay(break2);
digitalWrite (yellow,LOW);
digitalWrite(red,LOW);

digitalWrite (green,HIGH);
delay(break1);
digitalWrite(green,LOW);

digitalWrite (yellow,HIGH);
delay(break2);
digitalWrite(yellow,LOW);             // set the sequence for turning LEDs on/off 
}
