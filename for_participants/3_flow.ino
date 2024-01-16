/*
  Blink the LED once, when the button is pressed.

  Find all the bugs
*/

const int LED_RED = 9;
const int LED_GREEN = 8;

// Running when the Arduino starts up
void setup()
{
  Serial.begin(115200);
  pinMode(LED_GREEN, INPUT);
  pinMode(LED_RED, INPUT);
  unsigned long time = millis();
  randomSeed(time);
}

// Keep looping
void loop()
{
  reset();

  if (random(2) == 1)
  {
    digitalWrite(LED_RED, HIGH);
  }
  else if (randomValue == 2)
  {
    digitalWrite(LED_GREEN, HIGH);
  }

  delay(1000);
}

// Blinking the LED
void reset()
{
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_GREEN, LOW);
}