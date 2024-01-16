/*
  Play a tune and make sure it can turn off completely.

  Find all the bugs
*/

const int bendSensor = A0;
const int speaker = 9;

int value;

// Running when the Arduino starts up
void setup()
{
  Serial.begin(115200);
}

// Keep looping
void loop()
{
  int sensorValue = analogRead(bendSensor);
  int minValue = 0;
  int maxValue = 1023;
  int value = map(sensorValue, minValue, maxValue, 0, 1000);

  tone(speaker, value);

  delay(500);
}
