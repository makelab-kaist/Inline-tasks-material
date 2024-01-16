/*
  Adjust the brightness of the LED based on a potentiometer.

  Find all the bugs
*/

const int potentiometer = A0;
const int PWM_PIN = 7;

int value;

// Running when the Arduino starts up
void setup()
{
  Serial.begin(115200);
  pinMode(PWM_PIN, OUTPUT);
}

// Keep looping
void loop()
{
  int value = digitalRead(potentiometer);
  analogWrite(PWM_PIN, value);

  delay(500);
}
