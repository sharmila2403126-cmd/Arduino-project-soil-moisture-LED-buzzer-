# Arduino-project-soil-moisture-LED-buzzer-
This project uses a soil moisture sensor with an Arduino to monitor soil conditions. When the soil is moist, the system indicates a healthy condition by blinking an LED. When the soil becomes dry, a buzzer is activated to alert the user that watering is needed.
📖 Description

This project uses an Arduino and a soil moisture sensor to monitor the water level in soil. It helps in identifying whether the soil is moist or dry and gives an alert accordingly.

When the soil is moist, the system indicates a normal condition by blinking an LED. When the soil becomes dry, the Arduino activates a buzzer to alert the user that watering is required. The moisture level is continuously read as an analog value and compared with a predefined threshold to decide the condition.

This project is useful for beginners to understand sensor interfacing, analog input reading, and output control using Arduino. It can also be extended into an automatic irrigation system.

🔧 Components Required
Arduino Uno
Soil Moisture Sensor
LED
Buzzer
Resistor (220Ω for LED)
Jumper wires
Breadboard
🔌 Connections
🌱 Soil Moisture Sensor
VCC → 5V
GND → GND
AO → A0 (Analog Pin)
💡 LED
Long leg (+) → Pin 7
Short leg (–) → Resistor → GND
🔊 Buzzer
Positive (+) → Pin 8
Negative (–) → GND
