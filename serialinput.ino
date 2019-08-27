int led=12;
void setup()
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  
}
void loop()
{
  if(Serial.available()>0)
  {
    char data=Serial.read();
    if(data=='a')
    {
      digitalWrite(led,HIGH);
      delay(1000);
    }
    else
    {
      digitalWrite(led,LOW);
      
    }
    
  }
   
}
