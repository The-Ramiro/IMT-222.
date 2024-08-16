const int time = 1000;
const int diodeLED = LED_BUILTIN;

void setup() {
  pinMode(diodeLED, OUTPUT);
}

void loop() {
  digitalWrite(diodeLED, HIGH);
  delay(time);
  digitalWrite(diodeLED, LOW);
  delay(time);
}
