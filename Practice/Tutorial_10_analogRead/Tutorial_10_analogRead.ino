//Analog Read
//Reading a voltage from analog in pins
int analogPin = A3;
int readValue;
float voltage = 0;
int delayTime = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(analogPin, INPUT);
  Serial.begin(9600); //Initializing the serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(analogPin); //When reading analog value it will be printed as range of 10 bit from 0-1023. This is equivalent to 0V-5V respectively
  voltage = (5.0/1023.0)*readValue; //Conversion of the analog value to real voltage value
  Serial.print(voltage); //Displaying the actual voltage 
  Serial.println("V");
  delay(delayTime);
}
