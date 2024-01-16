/*
    Use the button to turn the LED on and off.

    Find all the bugs
*/

#define LED_PIN 9
#define BUTTON_PIN 7

// Running when the Arduino starts up
void setup()
{
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
}

// Keep looping
void loop()
{
    int but = digitalRead(BUTTON_PIN);
    if (but = HIGH)
    {
        analogWrite(LED_PIN, HIGH);
    }
    else
    {
        analogWrite(LED_PIN, LOW);
    }
    delay(500);
}