int ledPin=13;
int buttonpin=3;
int buttonstate=0;


void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(buttonpin,INPUT);
}

void loop()
{ buttonstate=digitalRead(buttonpin);
if(buttonstate==HIGH)
{
  digitalWrite(ledPin,HIGH);
}
else
{
  digitalWrite(ledPin,LOW);
}
}
