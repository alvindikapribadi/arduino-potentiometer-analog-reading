/*
  Project  : Arduino Potentiometer Analog Reading
  Desc     : Reading analog values from a rotary potentiometer using Arduino.
             The potentiometer outputs variable voltage (0–5V) which is read
             by the analog input pin (0–1023).

  Components:
  - Arduino Uno / Nano
  - Potentiometer 10KΩ (rotary analog)
  - Jumper wires
  - Breadboard (optional)

  Wiring:
  - Potentiometer:
      VCC pin    -> 5V
      Signal pin -> A0
      GND pin    -> GND
*/


const int potPin = A0;
int potValue = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Arduino Potentiometer Reading");
}

void loop() {
  potValue = analogRead(potPin); // Read analog value (0 - 1023)
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  delay(100);
}
