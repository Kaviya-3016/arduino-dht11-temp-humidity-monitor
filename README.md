# 🌡️ DHT11 Temperature & Humidity Monitor using Thingzkit Mini

A simple yet effective project that reads **temperature** and **humidity** data from the **DHT11 sensor** and prints it to the **Serial Monitor** using the **Thingzkit Mini** board (Arduino-compatible). Useful for environment monitoring in embedded systems and IoT applications.

---
## 🔧 Hardware Components

| Component         | Quantity |
|-------------------|----------|
| Thingzkit Mini    | 1        |
| DHT11 Sensor      | 1        |
| Jumper Wires      | As needed|
| USB Cable         | 1        |

---
## Thingzkit mini board

<img width="1000" height="636" alt="mini" src="https://github.com/user-attachments/assets/bf1b8b0d-b29e-480f-aba4-6c615416f0f8" />

---
### DHT11 Sensor

<img width="259" height="194" alt="image" src="https://github.com/user-attachments/assets/77590475-0f04-41e5-8d0b-1c3fcaba65bf" />

---
## 🖥️ Software Requirements

- Arduino IDE
- DHT Sensor Library by Adafruit
- Adafruit Unified Sensor Library
- USB Drivers for Thingzkit Mini

---
## 🧠 Setup Diagram

![WhatsApp Image 2025-07-24 at 20 59 18_deb38536](https://github.com/user-attachments/assets/76be8548-5f84-47e8-b77a-4631922b69c3)

---
## 📌 Output Format

- Reading from DHT11...
- Temp: 28.00 °C, Humidity: 65.00 %
- Temp: 28.10 °C, Humidity: 64.50 %

---

## 📄 Arduino Code

```
#include "DHT.h"
#include "Adafruit_Sensor.h"

#define DHTPIN 3       // GPIO pin where data pin is connected
#define DHTTYPE DHT11  // DHT 11 Sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Reading from DHT11...");
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // Temperature in Celsius

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT11 sensor!");
    return;
  }

  Serial.print("Temp: ");
  Serial.print(t);
  Serial.print(" °C, Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000);
}
```

---

## 🚀 How to Run

1. Connect the DHT11 sensor to Thingzkit Mini:
   VCC → 5V
   GND → GND
   DATA → Any Digital Pin
2. Open Arduino IDE.
3. Install required libraries via Library Manager:
   DHT sensor library by Adafruit
   Adafruit Unified Sensor
4. Upload the code to your Thingzkit Mini.
5. Open Serial Monitor (Ctrl + Shift + M).
6. Observe real-time sensor data.

---

## 💡 Applications
1. Home temperature and humidity monitoring
2. Weather stations
3. Smart farming and agriculture
4. IoT-based climate tracking
---

## 📜 License
This project is licensed under the MIT License – see the ```LICENSE``` file for details.

---

## 👩‍💻 Author
Kaviya Murugan
🎓 ECE Engineering | 💡 Embedded & AI Enthusiast
🔗  [LinkedIn](https://linkedin.com/in/kaviyamurugan) | [GitHub](https://github.com/kaviya-3016)








