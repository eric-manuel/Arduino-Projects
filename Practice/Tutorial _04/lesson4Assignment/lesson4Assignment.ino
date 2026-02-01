int redLED1 = 8;
int redLED2 = 12;
int redLED3 = 13;
int red1BlinkTime = 500;
int red2BlinkTime = 250;
int red3BlinkTime = 125;
int waitingTime = 1000;
int red1 = 0;
int red2 = 0;
int red3 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED1, OUTPUT);
  pinMode(redLED2, OUTPUT);
  pinMode(redLED3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(red1 < 5){
    digitalWrite(redLED1, HIGH);
    delay(red1BlinkTime);
    digitalWrite(redLED1, LOW);
    delay(red1BlinkTime);
    red1++;
  }

    while(red2 < 10){
    digitalWrite(redLED2, HIGH);
    delay(red2BlinkTime);
    digitalWrite(redLED2, LOW);
    delay(red2BlinkTime);
    red2++;
  }

    while(red3 < 15){
    digitalWrite(redLED3, HIGH);
    delay(red3BlinkTime);
    digitalWrite(redLED3, LOW);
    delay(red3BlinkTime);
    red3++;
  }

    red1 = 0;
    red2 = 0;
    red3 = 0;

  delay(waitingTime);
  
}
