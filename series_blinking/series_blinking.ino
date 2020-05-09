
const int L1 =3;
const int L2 =6;
const int L3 =8;
const int L4 =10;
void setup() {
  
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
}


void loop() {
  digitalWrite(L1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(L1, LOW);    // turn the LED off by making the voltage LOW
  delay(50);          
    digitalWrite(L2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(L2, LOW);    // turn the LED off by making the voltage LOW
  delay(50);          
    digitalWrite(L3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(L3, LOW);    // turn the LED off by making the voltage LOW
  delay(50);          
    digitalWrite(L4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(L4, LOW);    // turn the LED off by making the voltage LOW
  delay(50);          // wait for a second
}
