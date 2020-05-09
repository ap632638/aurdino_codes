const int ledPin = 3;

const int ldrPin = 14;
const int buzzer = 4;
const int IR=12;

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);
pinMode(IR,INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);
int IRStatus = digitalRead(IR);

if (ldrStatus >= 100) {

digitalWrite(ledPin, LOW);

Serial.print("Its Bright, Turn on the LED : ");

Serial.println(ldrStatus);
Serial.println(IRStatus);
       


} else {

digitalWrite(ledPin, HIGH);

Serial.print("Its BRIGHT, Turn off the LED : ");

Serial.println(ldrStatus);
 tone(buzzer, 1000); 
  delay(1000);       
  noTone(buzzer);    
  delay(1000);  

}

}
