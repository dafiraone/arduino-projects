int buzz = 13;
void setup() {
  pinMode (buzz, OUTPUT);
  pinMode(A0, INPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int ldr = analogRead(A0);
  Serial.println(map(ldr,0,1023,0,1023));
  if(ldr > 500) {
    tone(buzz, 1000);
  } else {
    noTone(buzz);
  }

}
