
const int LED =1;
void setup() {
  
  pinMode(LED, OUTPUT);
}


void loop() {
  digitalWrite(LED, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(10000);                       // wait for a second
}
