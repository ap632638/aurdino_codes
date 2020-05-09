#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include<SimpleTimer.h>
SimpleTimer timer;
const char wname[] = "Realme U1";
const char pass[]= "rakesh12";
const char token[]="Wk9P_94WMLVFonEdxVPW_Fi1v4eO4g5w";
const int sensorPin=D3;
const int buzzer =D4; 
const int led =D5;
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
    Blynk.email("sagarpandey2709117@gmail.com","Warning!!!","Warning!!! Someone ahead!!!");
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
