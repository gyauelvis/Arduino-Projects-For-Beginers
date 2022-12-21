#define THERMISTOR_PIN A0 // Pin for the thermistor
#define REFERENCE_VOLTAGE 5.0 // Reference voltage for the analog-to-digital converter (ADC)
#define NUM_SAMPLES 10 // Number of samples to take and average
#define B_VALUE 3950 // B value of the thermistor
#define RESISTANCE_AT_ROOM_TEMP 10000 // Resistance of the thermistor at 25 degrees Celsius

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud
}

void loop() {
  float resistance = 0;
  for (int i = 0; i < NUM_SAMPLES; i++) {
    int sensorValue = analogRead(THERMISTOR_PIN); // Read the thermistor value
    float voltage = (sensorValue / 1024.0) * REFERENCE_VOLTAGE; // Convert the sensor value to voltage
    resistance += (REFERENCE_VOLTAGE / voltage) - 1; // Calculate the resistance of the thermistor
  }
  resistance /= NUM_SAMPLES; // Average the resistance values
  resistance *= RESISTANCE_AT_ROOM_TEMP; // Calculate the resistance at 25 degrees Celsius
  float temperature = 1 / (log(resistance / RESISTANCE_AT_ROOM_TEMP) / B_VALUE + 1 / 298.15) - 273.15; // Calculate the temperature in degrees Celsius
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");
  delay(1000); // Wait 1 second before taking another reading
}
