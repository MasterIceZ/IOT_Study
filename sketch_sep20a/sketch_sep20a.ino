#include "DHT.h"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


#define DHTTYPE DHT22
#define DHTPIN  D4
DHT dht(DHTPIN, DHTTYPE, 15);

BlynkTimer timer;

char auth[] = "CEsD7Ks2dKHvEfAnT26vrUsDal9m0_h7";
char ssid[] = "ICEHOME_2.4GHz";
char pass[] = "ICEEARTH21";

void sendSensor()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  Blynk.virtualWrite(V5, h);
  Blynk.virtualWrite(V6, t);
  Blynk.virtualWrite(V7, f);
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
