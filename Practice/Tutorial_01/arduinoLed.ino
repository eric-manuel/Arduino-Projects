void setup() {
  // put your setup code here, to run once:
  pinMOde(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // HIGH means 5V
  delay(1000); // delay for 1,000ms or 1s
  digitalWrite(13, LOW); // LOW means 0V
  delay(1000);
  //Note: 15ms is the perceivable blinking of LED, lower than 15ms blinks is not perceivable
