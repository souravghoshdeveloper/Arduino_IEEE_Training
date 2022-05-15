#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("NSEC COUNT UP");
}
void loop()
{
  lcd.setCursor(6,1);
  lcd.print(millis()/1000);
}
