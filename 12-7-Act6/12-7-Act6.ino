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
  OLED.setCursor(5, 0);                
  OLED.setTextSize(2);                 
  OLED.println("Borworntat");               
  OLED.setCursor(50, 20);                                         
  OLED.println("Ice");
  OLED.setCursor(63, 40);                                         
  OLED.println("7");
  OLED.display();                               
}
