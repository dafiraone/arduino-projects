/*
   Arduino LCD I2C Tutorial by 'Tronics Lk"
   Please visit my YouTube channel from this link for more Tutorials
   https://www.youtube.com/channel/UCYJa3gs8q49-N3TLm-7ygUw?sub_confirmation=1
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//SDA=A4, SCL=A5

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

byte customChar[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000,
  0b00000
};

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
  lcd.print("LC Display");
  buzz(1000);
  delay(3000);

  lcd.setCursor(0, 1);
  lcd.print("I");
  buzz(500);
  delay(1000);
  lcd.setCursor(1, 1);
  lcd.print("2");
  buzz(500);
  delay(1000);
  lcd.setCursor(2, 1);
  lcd.print("C");
  delay(1000);
  
  lcd.createChar(0, customChar); // create a new custom character

  lcd.setCursor(2, 0); // move cursor to (2, 0)
  lcd.write((byte)0);  // print the custom char at (2, 0)

  delay(3000);
  
  lcd.clear();
}

void buzz(int waktu) {
  tone(13, waktu);
  delay(500);
  noTone(13);
}
