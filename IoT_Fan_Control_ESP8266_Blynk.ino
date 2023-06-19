#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPLfhjmRV7L"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "smAsWtsAnmENcE_0p2UELL0DN0TWczUe"
#define DHTPIN D5


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include "DHT.h"

char ssid[] = "wifi name";
char pass[] = "pass";

#define DHTTYPE DHT22
WidgetLED FAN(V6);

float humDHT = 0;
float tempDHT = 0;
int Val=0;

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  pinMode(D2, OUTPUT);
  digitalWrite(D2, HIGH);
  Serial.println(F("DHTxx test!"));
  dht.begin();
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

BLYNK_WRITE(V5) {
  Val = param.asInt();
  Serial.print(" The Treshold Value is: ");
  Serial.println(Val);
  Serial.println();
}

void loop()
{
  Blynk.run();

  delay(2000);

  humDHT = dht.readHumidity();
  tempDHT = dht.readTemperature();

  if (isnan(humDHT) || isnan(tempDHT)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Val = ");
  Serial.println(Val);
  Serial.print(F("Temperature: "));
  Serial.print(tempDHT);
  Serial.print(F("C"));
  Serial.println();
  Serial.print(F("Humidity: "));
  Serial.print(humDHT);
  Serial.print(F("%"));
  Serial.println();

  Serial.println("****************");
  Serial.println();

  if (Val < tempDHT) {
    digitalWrite(D2, LOW);
    FAN.on();
  }
  else {
    digitalWrite(D2, HIGH);
    FAN.off();
  }

  Blynk.virtualWrite(V3, tempDHT);
  Blynk.virtualWrite(V4, humDHT);
}
