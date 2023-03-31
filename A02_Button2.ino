/*******************************
 * Nama File : A02_Button2.ino
 * Contoh coding untuk 2 Button
 *******************************/
/* Uno --> P-02 (Display kit)
 *  2   -->  0 
 *  3   -->  1
 *  5   -->  4
 *  6   -->  5
 *  
 *  5V  -->  +
 *  Gnd -->  G
 */
 
const int btn1 = 2;
const int btn2 = 3;
const int led1 = 5;
const int led2 = 6;

void setup() {
  Serial.begin(9600);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);  
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);  
}

void loop() {
  ///----------------------- tombol 1
  if (digitalRead(btn1)==0) {
    do 
    { }
    while (digitalRead(btn1)==0);
    digitalWrite(led1,! digitalRead(led1));
   delay(20);
  }
  ///----------------------- tombol 2  
  if (digitalRead(btn2)==0) {
    do 
    { }
    while (digitalRead(btn2)==0);
    digitalWrite(led2,! digitalRead(led2));
   delay(20);
  }  
  Serial.print(digitalRead(led1));
  Serial.print(" - ");
  Serial.println(digitalRead(led2) );      
}
