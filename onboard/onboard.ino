#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup(){
 Serial.begin(9600); 
 dht.begin();
}

void loop(){
    delay(2000);
    float h = dht.readHumidity();
    float t = dht.readTemperature();
    float hic = dht.computeHeatIndex(t, h, false);

      Serial.print("\nHumidity: ");
      Serial.print(h);
      Serial.print("\nTemperature: ");
      Serial.print(t);
      Serial.print(" *C ");
      Serial.print("\nHeat index: ");
      Serial.print(hic);
      Serial.print(" *C ");
}

