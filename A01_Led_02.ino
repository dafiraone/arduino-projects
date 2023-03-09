/*******************************
 * Nama File : A01_Led_02.ino
 * Menyalakan Led dari pin 11,12
 *******************************/
const int PIN_LED=12;

int d = 250;
void setup() {
  pinMode(13,OUTPUT); // apa dampaknya jika baris ini di-non aktifkan
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);    
}

void loop() {
  digitalWrite(13,HIGH);
  delay(d);
 
  digitalWrite(13,LOW);
  delay(d);

  digitalWrite(12,HIGH);
  delay(d);
  
  digitalWrite(12,LOW);
  delay(d);

  digitalWrite(11,HIGH);
  delay(d);
 
  digitalWrite(11,LOW);
  delay(d);

  digitalWrite(10,HIGH);
  delay(d);
  
  digitalWrite(10,LOW);
  delay(d);

  digitalWrite(6,HIGH);
  delay(d);
  
  digitalWrite(6,LOW);
  delay(d); 

  digitalWrite(7,HIGH);
  delay(d);
  
  digitalWrite(7,LOW);
  delay(d);

 digitalWrite(8,HIGH);
  delay(d);
  
  digitalWrite(8,LOW);
  delay(d);

  digitalWrite(9,HIGH);
  delay(d);
  
  digitalWrite(9,LOW);
  delay(d);

  digitalWrite(5, HIGH);
  delay(d);
  digitalWrite(5, LOW);
}
