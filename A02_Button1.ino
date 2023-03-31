/*******************************
 * Nama File : A02_Button1.ino
 * Menaktif Tombol-0 dan Led-4
 *******************************/
/* Uno --> P-02 (Display kit)
 *  2   -->  0 
 *  5   -->  4
 * ------------- 
 *  Uno --> Pwr
 *  5V  -->  +
 *  Gnd -->  G
 */
const int btn = 2;
const int led1 = 5;

void setup() {
  Serial.begin(9600);
  pinMode(btn,INPUT);
  pinMode(led1,OUTPUT);
}

void loop() {
  Serial.println(digitalRead(led1));      
  if (digitalRead(btn)==0) {
    do 
    { }
    while (digitalRead(btn)==0);
    
    digitalWrite(led1,! digitalRead(led1));
   delay(20);
  }
}
