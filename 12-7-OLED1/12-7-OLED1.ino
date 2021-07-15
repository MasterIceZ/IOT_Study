#include <Wire.h>                               
#include <SPI.h>                                
#include <Adafruit_GFX.h>                       
#include <Adafruit_SSD1306.h>                   
#define OLED_RESET -1                           
Adafruit_SSD1306 OLED(OLED_RESET);              

void setup(){
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop(){
  OLED.clearDisplay();
  OLED.setTextColor(WHITE);            
  OLED.setCursor(20, 0);                
  OLED.setTextSize(1);                 
  OLED.println("Size 1");               
  OLED.setCursor(35, 20);               
  OLED.setTextSize(2);                          
  OLED.println("Size 2");
  OLED.display();                               
}
