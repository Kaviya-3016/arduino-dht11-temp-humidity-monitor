#include "DHT.h"
#include "Adafruit_Sensor.h"

// Define pin and type
#define DHTPIN 3       // GPIO 26 for DATA
#define DHTTYPE DHT11   // DHT11 sensor

DHT dht(DHTPIN, DHTTYPE); // Create sensor object

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Reading from DHT11...");
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // Celsius

  // Error checking
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT11 sensor!");
    return;
  }

  // Print values
  Serial.print("Temp: ");
  Serial.print(t);
  Serial.print(" °C, Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000); // Wait 2 sec
}
