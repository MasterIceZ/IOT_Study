#include<Wire.h>
#include<SPI.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>

#define led D0
#define knob A0

Adafruit_SSD1306 OLED(-1);

void setup() {
  pinMode(led, OUTPUT);
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);  
}

void loop() {
  OLED.clearDisplay();
  OLED.setCursor(5, 0);
  OLED.setTextColor(WHITE);
  OLED.setTextSize(2);
  int val = analogRead(knob);
  int prec = val * 100 / 1023;
  OLED.println("LED : " + String(prec ? "ON" : "OFF"));
  OLED.setCursor(50, 20);
  OLED.println(String(prec) + "%");
  analogWrite(led, max(val - 1, 0));
  OLED.display();
}
