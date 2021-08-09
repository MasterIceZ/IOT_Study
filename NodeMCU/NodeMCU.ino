#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "a_ax2O72Y4_tMRPH5tIyiT2l9-2erIfB";

char ssid[] = "ICEHOME_2.4GHz";
char pass[] = "ICEEARTH21";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
