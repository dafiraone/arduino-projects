/*******************************
* Nama File : A01_Led_80c-case.ino
 * Menyalakan 8 Led dari pin 6..13 MELINGKAR
 * Cara : menggunakan Counter dan Case ...
  *******************************/

/* Uno --> P-01 (Display kit)
 *  6  -->  7 
 *  7  -->  6
 *  8  -->  5  
 *  9  -->  4
 *  10 -->  3
 *  11 -->  2 
 *  12 -->  1
 *  13 -->  0
 */

int d = 250;
int i;

void setup() {
  int pin = 5;
  do {
    pinMode(pin,OUTPUT);
    pin++;
  } while(pin<=13);
  
  i = 13;
  Serial.begin(9600);
}

void loop() {
 int pot = analogRead(A0);
 Serial.println(pot);

 digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5, LOW);


 switch (pot)
 {
  case 125 ... 250:
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    break;   
  case 251 ... 500:
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  break;
  case 501 ... 750:
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  break;
  case 751 ... 1000:
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  break;
  case 1001 ... 1023:
  digitalWrite(5,HIGH);
  break;
 }
}
