#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}
void loop()
{
delay(500);
lcd.print("Creative people");
delay(500);
lcd.clear();

lcd.setCursor(3,0);
lcd.print("need time");
delay(500);
lcd.clear();

lcd.setCursor(1,0);
lcd.print("to sit around");
delay(500);
lcd.clear();

lcd.setCursor(5,0);
lcd.print("and do");
delay(500);
lcd.clear();

lcd.setCursor(3,1);
lcd.print("Nothing");
delay(300);
lcd.setCursor(10,1);
lcd.print(".");
delay(200);
lcd.setCursor(11,1);
lcd.print(".");
delay(200);
lcd.setCursor(12,1);
lcd.print(".");
delay(200);
lcd.clear();

lcd.setCursor(5,0);
lcd.print("AVmades");
delay(500);
lcd.setCursor(2,1);
lcd.print("Subscribe Now");
delay(500);
lcd.clear();
delay(500);
}
