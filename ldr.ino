int pin=A1;
int pin2=12;
void setup()
{
  pinMode(pin,INPUT);
  pinMode(pin2,OUTPUT);
  Serial.begin(9600);
  
}
void loop()
{
 int x=analogRead(pin);
  Serial.print("value is");
  Serial.println(x);
  
  if(x<300)
  {
    digitalWrite(pin2,HIGH);
    
  }
  else
  {
    digitalWrite(pin2,LOW);
  }
  delay(1000);
}
