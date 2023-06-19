int pin[]={13,12,11,10,6,7,8,9};

const int p0 = 6;
const int p1 = 7; 
const int p2 = 8; 
const int p3 = 9; 
const int p4 = 10; 
const int p5 = 11; 
const int p6 = 12; 
const int p7 = 13; 

int modeLed = 1;

void setup() {
  Serial.begin(9600);
  for (int i=0; i<8; i++) { 
    pinMode(pin[i],OUTPUT);
  }
}

void loop() {
    String data;
  if (Serial.available()) {
    data = Serial.readString();
    Serial.println(data.toInt());
  }

  switch (data.toInt()) {
    case 1:
      putarKiri();
      break;
    case 2:
      putarKanan();
      break;
    case 3:
      zigzag();
      break;
  }
}

void putarKiri() 
{
  for (int i=0;i<8; i++)
  { digitalWrite(pin[i],HIGH);
    delay(500);
    digitalWrite(pin[i],LOW);  
  }  
}

void putarKanan() 
{
  for (int i=7;i>=0; i--)
  { digitalWrite(pin[i],HIGH);
    delay(500);
    digitalWrite(pin[i],LOW);  
  }  
}

void zigzag()
{
  int pin[]={p0,p5,p2,p7,p3,p6,p1,p4};

  for (int i=0 ; i<8; i++)
  { digitalWrite(pin[i], HIGH);
  delay(500);
  digitalWrite(pin[i], LOW);
  }
}
