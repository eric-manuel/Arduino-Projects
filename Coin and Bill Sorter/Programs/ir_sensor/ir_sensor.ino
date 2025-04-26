const int irSensorPin4 = 4;  // IR sensor output pin connected to digital pin 4
const int irSensorPin5 = 5;  // IR sensor output pin connected to digital pin 5
const int irSensorPin6 = 6;  // IR sensor output pin connected to digital pin 6
const int irSensorPin7 = 7;  // IR sensor output pin connected to digital pin 7
int one = 0;
int five = 0;
int ten = 0;
int twenty = 0;
//const int ledPin = 13;      // LED connected to digital pin 13 (optional)

void setup() {
  pinMode(irSensorPin4, INPUT);  // Set IR sensor pin as input
  pinMode(irSensorPin5, INPUT);  // Set IR sensor pin as input
  pinMode(irSensorPin6, INPUT);  // Set IR sensor pin as input
  pinMode(irSensorPin7, INPUT);  // Set IR sensor pin as input
  //pinMode(ledPin, OUTPUT);      // Set LED pin as output (optional)
  Serial.begin(9600);           // Begin serial communication for debugging
}

void loop() {
  int sensorValue4 = digitalRead(irSensorPin4);  // Read the value from the IR sensor
  int sensorValue5 = digitalRead(irSensorPin5);  // Read the value from the IR sensor
  int sensorValue6 = digitalRead(irSensorPin6);  // Read the value from the IR sensor
  int sensorValue7 = digitalRead(irSensorPin7);  // Read the value from the IR sensor

  if (sensorValue4 == LOW) {
    // One coin detected
    one = one + 1;
    Serial.print("One: ");
    Serial.println(one);
  } 
  
  if (sensorValue5 == LOW) {
    // Five coin detected
    five = five + 1;
    Serial.print("Five: ");
    Serial.println(five);
  } 

  if (sensorValue6 == LOW) {
    // Ten coin detected
    ten = ten + 1;
    Serial.print("Ten: ");
    Serial.println(ten);
  } 

  if (sensorValue7 == LOW) {
    // Twenty coin detected
    twenty = twenty + 1;
    Serial.print("Twenty: ");
    Serial.println(twenty);
  } 
  delay(100);  // Small delay for stability

} 



