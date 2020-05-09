/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP8266 chip.

  Note: This requires ESP8266 support package:
    https://github.com/esp8266/Arduino

  Please be sure to select the right ESP8266 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include<Adafruit_SSD1306.h>
#include<Wire.h>
#include <DHT.h>
#define DHTPIN D5
#define DHTTYPE DHT11
#define OLED_RESET LED_BUILTIN
DHT dht(DHTPIN, DHTTYPE);
Adafruit_SSD1306 oled(OLED_RESET);

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "Zl9AFtvG_RRzPhgha7DncpKyGcHXT1cY";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Prerit";
char pass[] = "prerit368";

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  oled.begin(SSD1306_SWITCHCAPVCC,0x3C);
  oled.clearDisplay();
}

void loop()
{
  Blynk.run();
   float temp = dht.readTemperature();
  int humidity = dht.readHumidity();
  float tempF = dht.readTemperature(true);
  oled.clearDisplay();
  oled.setTextColor(WHITE);
  oled.setTextSize(1);
   oled.setCursor(0,0);
  oled.print("Temperature = ");
  oled.print(temp);
  oled.display();
  delay(1000);
  oled.clearDisplay();
   oled.setCursor(0,0);
  oled.print("F = ");
  oled.print(tempF);
  oled.display();
  delay(1000);
  oled.clearDisplay();
 oled.setCursor(0,0);
  oled.print("Humidity = ");
  oled.print(humidity);
  oled.display();
  delay(1000);
  oled.clearDisplay();
}

