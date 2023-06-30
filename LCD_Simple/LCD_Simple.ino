#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,4,5,6,7);

void setup() 
{
lcd.begin(16,2);  
}

void loop() {

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ABL Education");
}
