// Allumer une LED branchée sur la broche 5
void setup() {
  pinMode(5,OUTPUT);
}
// Faire clignoter la LED par intervalle de 1000ms
void loop(){
  digintalWrite(5,LOW);
  delay(1000);
  digitalWrite(5,HIGH);
  delay(1000);
}
