#include <LiquidCrystal_I2C.h>
#include  <Wire.h>
#include <CheapStepper.h>

//Variables for IR sensors
const int irSensorPin4 = 4;  // IR sensor output pin connected to digital pin 4
const int irSensorPin5 = 5;  // IR sensor output pin connected to digital pin 5
const int irSensorPin6 = 6;  // IR sensor output pin connected to digital pin 6
const int irSensorPin7 = 7;  // IR sensor output pin connected to digital pin 7

//Variables for buttons
const int buttonPinOne = 8; // button for one peso
const int buttonPinFive = 9; // button for five peso
const int buttonPinTen = 10; // button for ten peso
const int buttonPinTwenty = 11; // button for twenty peso
const int buttonPinTotal = 12; // button for total value
const int buttonPinReset = 13; // button for reset
int buttonReadOne;
int buttonReadFive;
int buttonReadTen;
int buttonReadTwenty;
int buttonReadTotal;
int buttonReadReset;

// Variables for LCD
int one = 0;  // counter for one peso coins
int five = 0; // counter for five peso coins
int ten = 0;  // counter for ten peso coins
int twenty = 0; // counter for twenty peso coins
int totalValue = 0;  //  summation of the total value of coins
int value = 0;

// Variables for stepper
const boolean moveClockwise = true;
const int deg = 10;

LiquidCrystal_I2C lcd(0x27,  16, 2);  //initialize the liquid crystal library
CheapStepper stepper (0,1,2,3); 

void setup() {
  pinMode(irSensorPin4, INPUT);  // Set IR sensor pin as input
  pinMode(irSensorPin5, INPUT);  // Set IR sensor pin as input
  pinMode(irSensorPin6, INPUT);  // Set IR sensor pin as input
  pinMode(irSensorPin7, INPUT);  // Set IR sensor pin as input
  
  lcd.init(); //initialize lcd screen
  lcd.backlight();  // turn on the backlight

  Serial.begin(9600);           // Begin serial communication for debugging

  pinMode(buttonPinOne, INPUT_PULLUP);
  pinMode(buttonPinFive, INPUT_PULLUP);
  pinMode(buttonPinTen, INPUT_PULLUP);
  pinMode(buttonPinTwenty, INPUT_PULLUP);
  pinMode(buttonPinTotal, INPUT_PULLUP);
  pinMode(buttonPinReset, INPUT_PULLUP);

  stepper.setRpm(20);

}

void loop() {

  moveClockwise = true;
  stepper.moveDegrees(moveClockwise, 10);
  
  int sensorValue4 = digitalRead(irSensorPin4);  // Read the value from the IR sensor
  int sensorValue5 = digitalRead(irSensorPin5);  // Read the value from the IR sensor
  int sensorValue6 = digitalRead(irSensorPin6);  // Read the value from the IR sensor
  int sensorValue7 = digitalRead(irSensorPin7);  // Read the value from the IR sensor

  buttonReadOne = digitalRead(buttonPinOne);
  buttonReadFive = digitalRead(buttonPinFive);
  buttonReadTen = digitalRead(buttonPinTen);
  buttonReadTwenty = digitalRead(buttonPinTwenty);
  buttonReadTotal = digitalRead(buttonPinTotal);
  buttonReadReset = digitalRead(buttonPinReset);

  if (sensorValue4 == LOW) {  // One coin detected
    lcd.clear();
    one = one + 1;
  } 
  
  if (sensorValue5 == LOW) {  // Five coin detected
    lcd.clear();
    five = five + 1;
  } 

  if (sensorValue6 == LOW) {  // Ten coin detected
    lcd.clear();
    ten = ten + 1;
  } 

  if (sensorValue7 == LOW) {  // Twenty coin detected
    lcd.clear();
    twenty = twenty + 1;
  } 



  if (buttonReadTotal == LOW) {  // One coin detected
    lcd.clear();
    value = 0;
  } 

  if(buttonReadOne == LOW){
    lcd.clear();
    value = 1;
  }

  if(buttonReadFive == LOW){
    lcd.clear();
    value = 5;
  }

  if(buttonReadTen == LOW){
    lcd.clear();
    value = 10;
  }

  if(buttonReadTwenty == LOW){
    lcd.clear();
    value = 20;
  }

  if (buttonReadReset == LOW) {  
    lcd.clear();
    one = 0;
    five = 0;
    ten = 0;
    twenty = 0;
    totalValue = 0;
  }
  switch (value){
    case 0:
    lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("Total Value");  // tell the screen to print “Five Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom  row
    totalValue = (one*1) + (five*5) + (ten*10) + (twenty*20);
    lcd.print(totalValue);  // tell the screen to print the number of coins detected on the bottom  row
    break;

    case 1:
    lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("One Peso Coin");  // tell the screen to print “One Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom  row
    lcd.print(one);  // tell the screen to print the number of coins detected on the bottom  row*
    break;

    case 5:
    lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("Five Peso Coin");  // tell the screen to print “Five Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom  row
    lcd.print(five);  // tell the screen to print the number of coins detected on the bottom  row
    break;

    case 10:
    lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("Ten Peso Coin");  // tell the screen to print “Ten Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom  row
    lcd.print(ten);  // tell the screen to print the number of coins detected on the bottom  row
    break;

    case 20:
    lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("Twenty Peso Coin");  // tell the screen to print “Twenty Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom row
    lcd.print(twenty);  // tell the screen to print the number of coins detected on the bottom  row
    break;
  }

} 





