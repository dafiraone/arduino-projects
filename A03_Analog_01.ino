void setup() {
  Serial.begin(9600);

}

void loop() {
  int teg = analogRead(A0);
  Serial.println(teg);
}
