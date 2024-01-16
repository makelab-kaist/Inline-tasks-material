# Exercises for INLINE paper

## Circuits

[Tinkercad source](https://www.tinkercad.com/things/jLKw2dnmpUr-stunning-kieran/editel?sharecode=gQUeC1H0B8NjBggudKwuXBx5U6naFjB8mrvmHFUZoTY)

### BOM

- ArduinoUNO
- Breadbaord
- Red LED
- Green LED
- 1k / 10k Potentiometer
- Pushbutton
- Wires
- Piezo speaker
- Photoresistor
- 1M Resistor
- 10k resistor

## For Instructor

### Ex 1

```
/*
  Adjust the brightness of the LED based on a potentiometer.
*/
/*
  Q1: PWM pin should be a digital PIN, like PIN 9
    Q1-B: pinMode is unnecessary
  Q2: analogRead instead of digitalRead
  Q3: use map to map the analog value to the range 0-255
*/
```

### Ex 2

```
/*
    Q1: add pinMode with INPUT_PULLUP for BUTTON_PIN
    Q2: digitalRead(BUTTON_PIN) = HIGH) should use "=="
    Q3: analogWrite => digitalWrite
*/
```

### Ex 3

```
/*
  Blink the LED once, when the button is pressed
*/
/*
  Q1: declare pinMode(PIN, OUTPUT);
  Q2: random will generate a value that never reach the second if branch
*/
```

### Ex 4

```
/*
  Play a tone based on the brightness snesed by the photoresistor.
*/
/*
  Q1: tone does not work because the speaker is not conencte to GND
  Q2: min max has to be determined with right ranges
*/
```
