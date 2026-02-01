int redLED1 = 8;
int redLED2 = 12;
int redLED3 = 13;
int lag = 250;
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
    delay(lag);
    digitalWrite(redLED1, LOW);
    delay(lag);
    red1++;
  }

    while(red2 < 10){
    digitalWrite(redLED2, HIGH);
    delay(lag);
    digitalWrite(redLED2, LOW);
    delay(lag);
    red2++;
  }

    while(red3 < 15){
    digitalWrite(redLED3, HIGH);
    delay(lag);
    digitalWrite(redLED3, LOW);
    delay(lag);
    red3++;
  }

    red1 = 0;
    red2 = 0;
    red3 = 0;

  delay(waitingTime);
  
}
