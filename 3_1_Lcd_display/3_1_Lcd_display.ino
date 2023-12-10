
#include <LiquidCrystal.h>

LiquidCrystal lcd(4,6,10,11,12,13);

void setup(){
  lcd.begin(16, 2);
}

void loop(){
  lcd.setCursor(0, 0);
  lcd.print("SELCT");
  lcd.setCursor(0,1);
  lcd.print("FLOOR");
}

