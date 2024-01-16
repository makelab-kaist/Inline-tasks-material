/*
  Change the brigthness of a LED using a photoresistor and a button updating

  Follow the guidelines
*/

const int sensor = A0;
const int button = 7;
const int led = 9;

// Running when the Arduino starts up
void setup()
{
  Serial.begin(115200);
  pinMode(led, OUTPUT);       //?
  digitalWrite(led, LOW);     // is 0 | assert ?
  pinMode(button, INPUT);     //?
  digitalWrite(button, HIGH); // is 1 | assert ?
}

// Keep looping
void loop()
{
  Serial.println("Should be between 0 and 9"); //?
  int value = analogRead(sensor) % 10;         // $$ % 10 | graph?
  Serial.print(value);                         // between 0, 9 | assert?

  int but = digitalRead(button); // assert?
  if (!but)
  {
    // make sure this line is executed
    Serial.println("here");                     // count times?
    int mappedValue = map(value, 0, 9, 0, 255); // between 0, 9 | assert ?
    analogWrite(9, mappedValue);                // log myFile.txt ?)
  }

  delay(500); //?
}
