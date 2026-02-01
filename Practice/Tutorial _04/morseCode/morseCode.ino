int redLED = 8;
int waitingTime = 1000;
int dot = 120;// The ration of dot to dash is 1:3
int dash = 360;
int betweenDelay = 500;
int x = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(x < 3){
    digitalWrite(redLED, HIGH);
    delay(dot);
    digitalWrite(redLED, LOW);
    delay(dot);
    x++;
  }

  delay(betweenDelay);
  x = 0;

  while(x < 3){
    digitalWrite(redLED, HIGH);
    delay(dash);
    digitalWrite(redLED, LOW);
    delay(dash);
    x++;
  }
  delay(betweenDelay);
  x = 0;

  while(x < 3){
    digitalWrite(redLED, HIGH);
    delay(dot);
    digitalWrite(redLED, LOW);
    delay(dot);
    x++;
  }

  delay(betweenDelay);
  x = 0;

  delay(waitingTime);


}
