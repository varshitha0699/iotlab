int led=12;
int push=2;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(push,INPUT);
}
void loop()
{
  //int value=digitalRead(push);
  if(digitalRead(push))
  {
    digitalWrite(led,LOW);
    //delay(1000);
  }
  else
  {
    digitalWrite(led,HIGH);
   // delay(1000);
  }
}
