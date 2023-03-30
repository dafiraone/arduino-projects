//motor stepper
//inisialisasi pin
int In1=8;
int In2=9;
int In3=10;
int In4=11;
int pinMaju   = 3;
int pinMundur = 2;

int step = 60;    //putaran penuh (6 derajat x 60 = 360)
int delayTime=2;  //makin kecil makin cepat

void setup(){
  //menetapkan setiap pin arduino sebagai output/input
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(In3,OUTPUT);
  pinMode(In4,OUTPUT);
  pinMode(pinMaju,INPUT);
  pinMode(pinMundur,INPUT);

  //fullup aktif
  digitalWrite (pinMaju, HIGH);
  digitalWrite (pinMundur, HIGH);
}

void loop(){
 if (digitalRead (pinMaju) == LOW){
  for (int i=0; i<60; i++){
    maju();
  }
 }

if (digitalRead (pinMundur) == LOW){
  for (int i=0; i<60; i++){
    mundur();
  }
 }
   
}

//program motor mundur
void mundur(){

  //step 4
  step4();
  
  delay(delayTime);
  
  //step 3
  step3();
  
  delay(delayTime);
  
  //step 2
  step2();
  
  delay(delayTime);
  
  //step 1
  step1();
  
  delay(delayTime);
}

//program motor maju
void maju(){

  //step 4
  step1();
  
  delay(delayTime);
  
  //step 3
  step2();
  
  delay(delayTime);
  
  //step 2
  step3();
  
  delay(delayTime);
  
  //step 1
  step4();
  
  delay(delayTime);
}

//Membuat fungsi pada setiap step
void step1(){
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,HIGH);
}

void step2(){
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  digitalWrite(In3,LOW);
  digitalWrite(In4,HIGH);
}

void step3(){
  digitalWrite(In1,HIGH);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,LOW);
  digitalWrite(In4,LOW);
}

void step4(){
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);
}
