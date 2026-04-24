
int soilPin = A0;   // Soil moisture sensor
int ledPin = 7;     // LED pin
int buzzer = 8;     // Buzzer pin

int value = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(soilPin);  // Read soil moisture

  Serial.print("Soil Value: ");
  Serial.println(value);

  // Adjust threshold based on your sensor
  if (value < 500) {
    // Soil is moist → LED blinks
    digitalWrite(buzzer, LOW);

    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } 
  else {
    // Soil is dry → buzzer ON
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzer, HIGH);
  }

  delay(200);
}
