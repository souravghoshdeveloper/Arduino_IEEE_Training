int ledPin=13;


void setup(){
  
}
void loop(){
  for (int fadevalue=0; fadevalue<=255; fadevalue +=1)
  {
    analogWrite(ledPin, fadevalue);
    delay(30);
  }
  for(int fadevalue=255; fadevalue>=0;fadevalue -=1)
  {
    analogWrite(ledPin,fadevalue);
    delay(30);
  }
}
