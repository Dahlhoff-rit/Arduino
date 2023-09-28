// constants won't change. Used here to set a pin number:
const int ledPin = 2;  // the number of the LED pin
const int spin_delay = 25;
const int end_delay = 750;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(spin_delay);
  digitalWrite(ledPin, LOW);
  delay(spin_delay);
  digitalWrite(ledPin, HIGH);
  delay(spin_delay);

  digitalWrite(ledPin, LOW);
  delay(end_delay);
}
