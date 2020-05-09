#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include<SimpleTimer.h>
SimpleTimer timer;
const char wname[] = "Extreme_One AV";
const char pass[]= "-*-=+@123";
const char token[]="Bjer-qgV3NHZTb9lsu8Uz1otxVPOEAqm";
const int sensorPin=D4;
const int buzzer=D6; 
const int led=D5;
void setup()
{
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
  Blynk.begin(token,wname,pass);
  timer.setInterval(1000L,abcd);
    pinMode(buzzer, OUTPUT); 
    pinMode(led,OUTPUT);
}
void loop()
{
  Blynk.run();
  timer.run();
}
void abcd()
{
  int value=digitalRead(sensorPin);
  if(value==0)
  {
    Blynk.notify("Warning!!! Someone ahead!!!");
    Blynk.email("ajeet.vishwakarma2018@sait.ac.in","Warning!!!","Warning!!! Someone ahead!!!");
    digitalWrite(led,HIGH);
     tone(buzzer, 1000); 
  delay(1000);        
        
  }
  else{
    digitalWrite(led,LOW);
     noTone(buzzer);    
  
  delay(1000); 
  }
}
