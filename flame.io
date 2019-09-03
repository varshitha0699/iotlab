int flame=A4;
int led=10;
int buzzer=7;




void setup() {
 pinMode(buzzer,OUTPUT);
 pinMode(led,OUTPUT);
 pinMode(flame,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(flame);
  Serial.println(value);
  
  if(value<300)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
  }
  delay(1000);
}
