
#include <DHT.h>

#if defined(ESP8266)
  #include <ESP8266WiFi.h>
  #define MQ_PIN A0
  #define DHT_PIN D5
#elif defined(ESP32)
  #include <WiFi.h>
  #define MQ_PIN 34
  #define DHT_PIN 4
#else
  #error "Select ESP8266 or ESP32 board"
#endif

#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

const int GAS_THRESHOLD = 500;
const float TEMP_THRESHOLD = 40.0;

void setup() {
  Serial.begin(115200);
  dht.begin();

  Serial.println("Child Safety Monitoring System");
  Serial.println("Monitoring started...");
}

void loop() {
  int gasValue = analogRead(MQ_PIN);
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.println("\n--- Sensor Readings ---");

  Serial.print("Gas reading: ");
  Serial.println(gasValue);

  if (!isnan(temperature) && !isnan(humidity)) {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  } else {
    Serial.println("DHT11 reading failed");
  }

  if (gasValue > GAS_THRESHOLD) {
    Serial.println("WARNING: Gas threshold exceeded!");
  }

  if (!isnan(temperature) && temperature > TEMP_THRESHOLD) {
    Serial.println("WARNING: High temperature!");
  }

  delay(2000);
}
