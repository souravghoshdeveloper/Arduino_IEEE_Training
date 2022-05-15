#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(2,0);
  lcd.print("NASKAR'S");
}
void loop()
{
  lcd.setCursor(4,1);
  lcd.print(" PEACE ");
  
}
