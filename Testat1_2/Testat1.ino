// the setup function runs once when you press reset or power the board
// wird einmal beim Start des Programs ausgeführt
void setup() {
  // initialisiert den pin LED_BUILTIN als output pin 
  pinMode(LED_BUILTIN, OUTPUT);
}

// wird ständig ausgeführt
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // led an (HIGH = voltage level HIGH)
  delay(250);                      // wartet 250 ms
  digitalWrite(LED_BUILTIN, LOW);   // led aus (LOW = voltage level LOW)
  delay(250);                      // wartet 250 ms
}
