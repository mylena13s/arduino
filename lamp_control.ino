#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int pinoLamp = 13;

void setup()
{
  pinMode(pinoLamp, OUTPUT);
  lcd.begin(16, 2);
  
}

void loop()
{
  digitalWrite(pinoLamp, HIGH);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Turn On");
  
  delay(2000);
  
  digitalWrite(pinoLamp, LOW);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Turn Off");
  
  delay(2000);
}
