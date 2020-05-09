#include<Adafruit_SSD1306.h>
#include<Wire.h>
#include <DHT.h>
#define DHTPIN D5
#define DHTTYPE DHT11
#define OLED_RESET LED_BUILTIN
DHT dht(DHTPIN, DHTTYPE);
Adafruit_SSD1306 oled(OLED_RESET);
void setup() {
  Serial.begin(9600);
  dht.begin();
  oled.begin(SSD1306_SWITCHCAPVCC,0x3C);
  oled.clearDisplay();
  
}

void loop() {
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

}
