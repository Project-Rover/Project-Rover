const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  Serial.print("Sensor value = ");
  Serial.println(sensorValue);

  delay(200);
}