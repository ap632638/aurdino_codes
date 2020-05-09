#include<Adafruit_SSD1306.h>
#include<Wire.h>
#define OLED_RESET LED_BUILTIN
Adafruit_SSD1306 oled(OLED_RESET);
void setup() {
  oled.begin(SSD1306_SWITCHCAPVCC,0x3C);
  oled.clearDisplay();
}

void loop() {
  oled.clearDisplay();
  oled.setTextColor(WHITE);
  oled.setTextSize(1);
  oled.setCursor(20,20);
  oled.print("I am also Vegan!!!");
  oled.display();
  delay(100);
  oled.clearDisplay();
  oled.setCursor(20,10);
  oled.print("hi");
  oled.display();
  delay(100);  
}
