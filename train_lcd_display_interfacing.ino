#include<LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2);

int ln=1;
int cur=0;
int ichar;

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(1,0);
  lcd.print("Mumbai F Local");
}
void loop()
{
  Mulund();
  delay(75);
}

void Mulund()
{
  char * txt= "                Next station> Mulund >Destination> Chhatrapati Shivaji Maharaj Terminus (CSMT) ";
  int LenTxt= strlen(txt);
  if(cur==(LenTxt -1))
  {
    cur=0;
  }
  lcd.setCursor(0,ln);
  if(cur<LenTxt -16)
  {
    for(ichar=cur; ichar < cur + 16; ichar++)
    {
      lcd.print(txt[ichar]);
    }
  }
  else
  {
    for(ichar= cur; ichar <( LenTxt -1); ichar++)
    {
      lcd.print (txt[ichar]);
    }
    for(ichar=0; ichar <=16 - (LenTxt - cur); ichar++)
    {
      lcd.print (txt[ichar]);
    }
  }
  cur++;
}
