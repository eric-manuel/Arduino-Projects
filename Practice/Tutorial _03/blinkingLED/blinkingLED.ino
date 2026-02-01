int redLED = 8;
int lag = 20;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  delay(lag);
  digitalWrite(redLED, LOW);
  delay(lag);
}
