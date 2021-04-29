#include<Servo.h>
Servo myservo;
int potpin=A1;
int red =2;
int blue=3;
int green=4;
int val;





void setup()
{
  myservo.attach(5);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  Serial.begin(9600);
  

}

void loop()
{
 val=analogRead(potpin);
 val=map(val,0,1023,0,180);
 myservo.write(val);
  
 delay(5);
  
  if (val<=60){
    digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);
  } 
  else if(val<=120){
    digitalWrite(blue,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
  }
  else if(val<=180){
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
    
  }
   

}



