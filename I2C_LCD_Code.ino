#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();         // initialize the lcd
  lcd.backlight();    // Turn on the LCD screen backlight
  pinMode(13, OUTPUT);
}

void loop()
{
  
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("TESTER");
  buzz(1000);
  delay(3000);

  lcd.setCursor(0, 1);
  lcd.print("T");
  buzz(500);
  delay(1000);
  lcd.setCursor(1, 1);
  lcd.print("E");
  buzz(500);
  delay(1000);
  lcd.setCursor(2, 1);
  lcd.print("S");
  buzz(500);
  delay(1000);
  lcd.setCursor(3, 1);
  lcd.print("T");
  buzz(500);
  delay(1000);
  lcd.setCursor(4, 1);
  lcd.print("E");
  buzz(500);
  delay(1000);
  lcd.setCursor(5, 1);
  lcd.print("R");
  buzz(500);
  delay(3000);
  lcd.clear();
}

void buzz(int waktu) {
  tone(13, waktu);
  delay(500);
  noTone(13);
}
