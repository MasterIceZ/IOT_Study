#include <TridentTD_LineNotify.h>
#include <ESP8266WiFi.h>

#define SSID "ICEHOME_2.4GHz"
#define PSSWD "ICEEARTH21"
#define LINE_TOKEN "8ydtsdoOxpiPwbX9ZGXae7oGQBD6SaFu8nDj1npR5Mw"

#define LED D4
#define BUTTON D0

void setup() {
  Serial.begin(115200);
  Serial.println();

  WiFi.begin(SSID, PSSWD);
  Serial.printf("Connecting to %s", SSID);
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(400);
  }
  Serial.printf("\nConnected ");
  Serial.println(WiFi.localIP());

  LINE.setToken(LINE_TOKEN);
  LINE.notify("Online");

  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

bool state = false;

void loop() {
  if(!digitalRead(BUTTON)){
    state = !state;  
    digitalWrite(LED,state);
    if(state){
      LINE.notify("ไฟติด UwU");  
    }
    else{
      LINE.notify("ไฟดับ TwT");
    }
  }
  delay(400);
}
