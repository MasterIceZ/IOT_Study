#include "DHT.h"                      // Include DHT library
#include <Wire.h>                     // Include I2C bus library
#include <SPI.h>                                
#include <Adafruit_GFX.h>             // Include OLED library
#include <Adafruit_SSD1306.h>         // Include OLED library
#define OLED_RESET -1                           
Adafruit_SSD1306 OLED(OLED_RESET);    // New object OLED

#define DHTTYPE DHT22
#define DHTPIN  D0
DHT dht(DHTPIN, DHTTYPE, 15);
void setup() 
{
  Serial.begin(9600);
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C); // I2C addr 0x3C
}
void loop() 
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  if (isnan(h) || isnan(t) || isnan(f)) 
  {
    Serial.println("Failed to read from DHT sensor!");
  }
  else 
  {
    OLED.clearDisplay();
    OLED.setTextColor(WHITE);
    OLED.setCursor(0, 0);
    OLED.setTextSize(3);
    OLED.println(String("H:") + String(h, 0) + " %");
    OLED.setCursor(0, 30);
    OLED.print(String("T:") + String(t, 0) + " ");
    OLED.write(247);
    OLED.print("C");
    OLED.display();
  }
}
