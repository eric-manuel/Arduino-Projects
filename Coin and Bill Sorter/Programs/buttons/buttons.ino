int buttonPinOne = 8;
//int buttonPinFive = 9;
//int buttonPinTen = 10;
//int buttonPinTwenty = 11;
int buttonReadOne;
//int buttonReadFive;
//int buttonReadTen;
//int buttonReadTwenty;
int dt = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPinOne, INPUT_PULLUP);
  //pinMode(buttonPinFive, INPUT);
  //pinMode(buttonPinTen, INPUT);
  //pinMode(buttonPinTwenty, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonReadOne = digitalRead(buttonPinOne);
  //buttonReadFive = digitalRead(buttonPinFive);
  //buttonReadTen = digitalRead(buttonPinTen);
  //buttonReadTwenty = digitalRead(buttonPinTwenty);

  Serial.println(buttonReadOne);
  //Serial.println(buttonReadFive);
  //Serial.println(buttonReadTen);
  //Serial.println(buttonReadTwenty);

  delay(dt);
}
