int led=12;
int push=2;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(push,INPUT);
  Serial.begin(9600);
}
void loop()
{
 
  if(digitalRead(push))
  {
    digitalWrite(led,HIGH);
    //delay(1000);
  }
  else
  {
    digitalWrite(led,LOW);
   // delay(1000);
  }
  Serial.println(digitalRead(push));
}
