#include <Wire.h>                               
#include <SPI.h>                                
#include <Adafruit_GFX.h>                       
#include <Adafruit_SSD1306.h>                   
#define OLED_RESET -1    

#define SW D4
                       
Adafruit_SSD1306 OLED(OLED_RESET);              

void setup(){
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

int state;

void loop(){
  OLED.clearDisplay();
  OLED.setTextColor(WHITE);            
  OLED.setCursor(35, 20);               
  OLED.setTextSize(2);
  bool clicked = !analogRead(SW);
  if(clicked){                 
    ++state;
    state %= 2;
    delay(500);
  }
  OLED.println(state ? "ON" : "OFF");
  OLED.display();                               
}
