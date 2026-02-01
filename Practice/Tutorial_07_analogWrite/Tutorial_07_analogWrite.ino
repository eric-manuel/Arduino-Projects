//Analog Write
//Fading LED
int redPin = 9; // Analog output pins: 3,5,6,9,10,11
int on = 255;
int brighter = 127;
int bright = 63;
int dim = 31;
int dimmer = 15;
int dimmest = 7;
int off = 0;
int waitTime = 80;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, on); //The value of the second parameter is from 0-255, 0V - 5V respectively.
  delay(waitTime);
  analogWrite(redPin, brighter); //The value of the second parameter is from 0-255, 0V - 5V respectively.
  delay(waitTime);
  analogWrite(redPin, bright); //The value of the second parameter is from 0-255, 0V - 5V respectively.
  delay(waitTime);
  analogWrite(redPin, dim); //The value of the second parameter is from 0-255, 0V - 5V respectively.
  delay(waitTime);
  analogWrite(redPin, dimmer); //The value of the second parameter is from 0-255, 0V - 5V respectively.
  delay(waitTime);
  analogWrite(redPin, dimmest); //The value of the second parameter is from 0-255, 0V - 5V respectively.
  delay(waitTime);
  analogWrite(redPin, off); //The value of the second parameter is from 0-255, 0V - 5V respectively.
  delay(waitTime);
  delay(waitTime);
}
