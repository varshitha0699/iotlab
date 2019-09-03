#include<Servo.h>
Servo myservo;
int pos=0;
int sensor=A4;

int sensorvalue=0;

void setup() {
 // pinMode(sensor,INPUT);
  
  myservo.attach(11);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
 
}

void loop() {
  sensorvalue=analogRead(sensor);
  Serial.println(sensorvalue);

  
   if(sensorvalue>500)
   {
    for(pos=0;pos<180;pos++)
    {
    myservo.write(pos);
    delay(15);
   }
   for(pos=180;pos>=0;pos--)
   {
   myservo.write(pos);
   delay(15);
   }
   
  }
   
  delay(1000);
}
