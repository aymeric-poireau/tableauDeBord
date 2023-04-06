
#include "DHT.h"
#include "LiquidCrystal.h"
#define DHTPIN 8
#define DHTTYPE DHT11  
#define DELTA_TEMPERATURE 0.7

DHT dht(DHTPIN,DHTTYPE);
LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
 lcd.println("Temperature =" + String(dht.readTemperature() - DELTA_TEMPERATURE) + " °C");
 lcd.println("Humidite =" + String(dht.readHumidity()) +"°%");
}
