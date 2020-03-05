#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "OE8NTcXtRUxZAqM9e566nfnx4Tci9gVs";

char ssid[] = "Redmi";
char pass[] = "rohit1912";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
