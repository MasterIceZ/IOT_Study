#include "DHT.h"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


#define DHTTYPE DHT22
#define DHTPIN  D4
DHT dht(DHTPIN, DHTTYPE, 15);
BlynkTimer timer;

char auth[] = "a_ax2O72Y4_tMRPH5tIyiT2l9-2erIfB";
char ssid[] = "ICEHOME_5GHz";
char pass[] = "ICEEARTH21";


void sendSensor()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Blynk.virtualWrite(V5,h);
  Blynk.virtualWrite(V6,t);
}
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  timer.setInterval(1000L,sendSensor);
}


void loop()
{
  Blynk.run();
  timer.run();
}
