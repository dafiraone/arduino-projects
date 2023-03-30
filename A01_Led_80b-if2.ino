/*******************************
* Nama File : A01_Led_80b-if2.ino
 * Menyalakan 8 Led dari pin 6..13 Melingkar
 * Cara : menggunakan Counter dan sintax If..Else
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
}

void loop() {
 digitalWrite(i,HIGH);
 delay(d);

 digitalWrite(i,LOW);
 delay(d);

//******************************** lihat buku hal 67
 if (i == 9) {
  i = 13;
 }
 else {
   if (i == 10) {
    i = 6;
   } 
   else
   {
     if (i>9) 
       { i--; } 
     else 
       { i++; }   
   } 
 } 
 
}
