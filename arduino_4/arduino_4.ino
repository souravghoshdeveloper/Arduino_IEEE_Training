int adc_key_in=0;
int inPin=0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  adc_key_in=analogRead(inPin);
  Serial.print("Analog value from pin");
  Serial.print(inPin);
  Serial.print("is=");
  Serial.println(adc_key_in);
  delay(1000);
  \
}
