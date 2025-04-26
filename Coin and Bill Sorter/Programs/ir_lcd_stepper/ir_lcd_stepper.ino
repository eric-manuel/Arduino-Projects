#include <LiquidCrystal_I2C.h>
#include  <Wire.h>

const int irSensorPin4 = 4;  // IR sensor output pin connected to digital pin 4
const int irSensorPin5 = 5;  // IR sensor output pin connected to digital pin 5
const int irSensorPin6 = 6;  // IR sensor output pin connected to digital pin 6
const int irSensorPin7 = 7;  // IR sensor output pin connected to digital pin 7
int one = 0;  // counter for one peso coins
int five = 0; // counter for five peso coins
int ten = 0;  // counter for ten peso coins
int twenty = 0; // counter for twenty peso coins
int totalCoins = 0; //  summation of the total number of coins
int totalValue = 0;  //  summation of the total value of coins

LiquidCrystal_I2C lcd(0x27,  16, 2);  //initialize the liquid crystal library


void setup() {  
  pinMode(irSensorPin4, INPUT);  // Set IR sensor pin as input
  pinMode(irSensorPin5, INPUT);  // Set IR sensor pin as input
  pinMode(irSensorPin6, INPUT);  // Set IR sensor pin as input
  pinMode(irSensorPin7, INPUT);  // Set IR sensor pin as input
  
  lcd.init(); //initialize lcd screen
  lcd.backlight();  // turn on the backlight

  Serial.begin(9600); // Begin serial communication for debugging
  
}

void loop() {
  
  int sensorValue4 = digitalRead(irSensorPin4);  // Read the value from the IR sensor
  int sensorValue5 = digitalRead(irSensorPin5);  // Read the value from the IR sensor
  int sensorValue6 = digitalRead(irSensorPin6);  // Read the value from the IR sensor
  int sensorValue7 = digitalRead(irSensorPin7);  // Read the value from the IR sensor

  if (sensorValue4 == LOW) {  // One coin detected
    one = one + 1;
    /*lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("One Peso Coin");  // tell the screen to print “One Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom  row
    lcd.print(one);  // tell the screen to print the number of coins detected on the bottom  row*/
    Serial.print("One Peso Coin: ");
    Serial.println(one);
  } 
  
  if (sensorValue5 == LOW) {  // Five coin detected
    five = five + 1;
    /*lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("Five Peso Coin");  // tell the screen to print “Five Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom  row
    lcd.print(five);  // tell the screen to print the number of coins detected on the bottom  row*/
    Serial.print("Five Peso Coin: ");
    Serial.println(five);
  } 

  if (sensorValue6 == LOW) {  // Ten coin detected
    ten = ten + 1;
    /*lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("Ten Peso Coin");  // tell the screen to print “Ten Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom  row
    lcd.print(ten);  // tell the screen to print the number of coins detected on the bottom  row*/
    Serial.print("Ten Peso Coin: ");
    Serial.println(ten);
  } 

  if (sensorValue7 == LOW) {  // Twenty coin detected
    twenty = twenty + 1;
    /*lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("Twenty Peso Coin");  // tell the screen to print “Twenty Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom row
    lcd.print(twenty);  // tell the screen to print the number of coins detected on the bottom  row*/
    Serial.print("Twenty Peso Coin: ");
    Serial.println(twenty);
  } 
    //Number of Coins
    /*lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("Number of Coins");  // tell the screen to print “Five Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom  row
    totalCoins = one + five + ten + twenty;
    lcd.print(totalCoins);  // tell the screen to print the number of coins detected on the bottom  row*/

    //Total Value
    lcd.setCursor(0,0); // tell the screen to print on the top row
    lcd.print("Total Value");  // tell the screen to print “Five Peso Coin:” on the top  row
    lcd.setCursor(0,1); // tell the screen to print on the bottom  row
    totalValue = (one*1) + (five*5) + (ten*10) + (twenty*20);
    lcd.print(totalValue);  // tell the screen to print the number of coins detected on the bottom  row



} 



