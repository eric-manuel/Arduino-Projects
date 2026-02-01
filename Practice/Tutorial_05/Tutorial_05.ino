//4-Bit Binary Counter

const int firstLED = 8;
const int secondLED = 9;
const int thirdLED = 10;
const int fourthLED = 11;
const int time = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(firstLED, OUTPUT);
  pinMode(secondLED, OUTPUT);
  pinMode(thirdLED, OUTPUT);
  pinMode(fourthLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //0
  digitalWrite(firstLED, LOW);
  digitalWrite(secondLED, LOW);
  digitalWrite(thirdLED, LOW);
  digitalWrite(fourthLED, LOW);
  delay(time);

  //1
  digitalWrite(firstLED, HIGH);
  digitalWrite(secondLED, LOW);
  digitalWrite(thirdLED, LOW);
  digitalWrite(fourthLED, LOW);
  delay(time);

  //2
  digitalWrite(firstLED, LOW);
  digitalWrite(secondLED, HIGH);
  digitalWrite(thirdLED, LOW);
  digitalWrite(fourthLED, LOW);
  delay(time);

  //3
  digitalWrite(firstLED, HIGH);
  digitalWrite(secondLED, HIGH);
  digitalWrite(thirdLED, LOW);
  digitalWrite(fourthLED, LOW);
  delay(time);

  //4
  digitalWrite(firstLED, LOW);
  digitalWrite(secondLED, LOW);
  digitalWrite(thirdLED, HIGH);
  digitalWrite(fourthLED, LOW);
  delay(time);

  //5
  digitalWrite(firstLED, HIGH);
  digitalWrite(secondLED, LOW);
  digitalWrite(thirdLED, HIGH);
  digitalWrite(fourthLED, LOW);
  delay(time);

  //6
  digitalWrite(firstLED, LOW);
  digitalWrite(secondLED, HIGH);
  digitalWrite(thirdLED, HIGH);
  digitalWrite(fourthLED, LOW);
  delay(time);

  //7
  digitalWrite(firstLED, HIGH);
  digitalWrite(secondLED, HIGH);
  digitalWrite(thirdLED, HIGH);
  digitalWrite(fourthLED, LOW);
  delay(time);

  //8
  digitalWrite(firstLED, LOW);
  digitalWrite(secondLED, LOW);
  digitalWrite(thirdLED, LOW);
  digitalWrite(fourthLED, HIGH);
  delay(time);

  //9
  digitalWrite(firstLED, HIGH);
  digitalWrite(secondLED, LOW);
  digitalWrite(thirdLED, LOW);
  digitalWrite(fourthLED, HIGH);
  delay(time);

  //10
  digitalWrite(firstLED, LOW);
  digitalWrite(secondLED, HIGH);
  digitalWrite(thirdLED, LOW);
  digitalWrite(fourthLED, HIGH);
  delay(time);

  //11
  digitalWrite(firstLED, HIGH);
  digitalWrite(secondLED, HIGH);
  digitalWrite(thirdLED, LOW);
  digitalWrite(fourthLED, HIGH);
  delay(time);

  //12
  digitalWrite(firstLED, LOW);
  digitalWrite(secondLED, LOW);
  digitalWrite(thirdLED, HIGH);
  digitalWrite(fourthLED, HIGH);
  delay(time);

  //13
  digitalWrite(firstLED, HIGH);
  digitalWrite(secondLED, LOW);
  digitalWrite(thirdLED, HIGH);
  digitalWrite(fourthLED, HIGH);
  delay(time);

  //14
  digitalWrite(firstLED, LOW);
  digitalWrite(secondLED, HIGH);
  digitalWrite(thirdLED, HIGH);
  digitalWrite(fourthLED, HIGH);
  delay(time);

  //15
  digitalWrite(firstLED, HIGH);
  digitalWrite(secondLED, HIGH);
  digitalWrite(thirdLED, HIGH);
  digitalWrite(fourthLED, HIGH);
  delay(time);

}
