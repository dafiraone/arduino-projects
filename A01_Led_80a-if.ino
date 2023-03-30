/*******************************
 * Nama File : A01_Led_80a-if.ino
 * Menyalakan 8 Led dari pin 6..13
 * Cara : menggunakan Counter dan sintax If
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
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  i = 13;
  Serial.begin(9600);
}

void loop() {
   
 Serial.println(i); 
 digitalWrite(i,HIGH);
 delay(d);

 digitalWrite(i,LOW);
 delay(d);
 
 //******************************** lihat buku hal 64

 if (i < 7) {  // jelaskan kenapa i<7
  i = 14;      // jelaskan kenapa i=14
 }

 i--;
 
}
