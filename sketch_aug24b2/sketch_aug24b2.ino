#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include<SimpleTimer.h>
#include<Adafruit_SSD1306.h>
#include<Wire.h>
#define OLED_RESET LED_BUILTIN
Adafruit_SSD1306 oled(OLED_RESET);
void setup() {
  oled.begin(SSD1306_SWITCHCAPVCC,0x3C);
  oled.clearDisplay();
SimpleTimer timer;
const char wname[] = "Realme U1";
const char pass[]= "rakesh12";
const char token[]="Wk9P_94WMLVFonEdxVPW_Fi1v4eO4g5w";
const int sensorPin=D3;
void setup()
{
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
  Blynk.begin(token,wname,pass);
  timer.setInterval(1000L,abcd);
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
    Blynk.email("rakesh.yadav2018@sait.ac.in","Warning!!!","Warning!!! Someone ahead!!!");
    
  }
}
