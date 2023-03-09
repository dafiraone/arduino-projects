/*******************************
 * Nama File : A01_Led_01.ino
 * Menyalakan Led dari pin 12
 *******************************/
const int PIN_LED=12;

void setup() {
  pinMode(PIN_LED,OUTPUT); // apa dampaknya jika baris ini di-non aktifkan
  pinMode(11,OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED,HIGH);
  delay(1000);
  
  digitalWrite(PIN_LED,LOW);
  delay(1000);

  digitalWrite(11,HIGH);
  delay(1000);
  
  digitalWrite(11,LOW);
  delay(1000);
}
