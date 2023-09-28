// constants won't change. Used here to set a pin number:
const int ledPin1 = 2;  // the number of the LED pin
const int ledPin2 = 4;
const int spin_delay = 25;
const int end_delay = 750;

void setup() {
  // set the digital pin as output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  blinckLed1();
  blinckLed2();
}

void blinckLed1() {
  digitalWrite(ledPin1, HIGH);
  delay(spin_delay);
  digitalWrite(ledPin1, LOW);
  delay(spin_delay);
  digitalWrite(ledPin1, HIGH);
  delay(spin_delay);

  digitalWrite(ledPin1, LOW);
  delay(end_delay);
}

void blinckLed2() {
  digitalWrite(ledPin2, HIGH);
  delay(spin_delay);
  digitalWrite(ledPin2, LOW);
  delay(spin_delay);
  digitalWrite(ledPin2, HIGH);
  delay(spin_delay);

  digitalWrite(ledPin2, LOW);
  delay(end_delay);
}