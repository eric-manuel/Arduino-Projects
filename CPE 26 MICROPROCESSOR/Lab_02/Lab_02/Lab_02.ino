//ERIC MANUEL R MANZANERO 
//BSCpE 3A

//variable to control the speed
const int time = 100;

void setup() {
  // put your setup code here, to run once:
  //Initialize pins 2 through 9 as OUTPUT using loop
  for (int pin = 2; pin <= 9; pin++){
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  //Pattern 1: The "Chase" (Left to Right)
  for (int pin = 2; pin <= 9; pin++){
    digitalWrite(pin, HIGH); //Turn LED on
    delay(time); //Speed of the "dance"
    digitalWrite(pin, LOW); //Turn LED off
    }

  // Pattern 2: The "Return" (Right to Left)
  for (int pin = 9; pin >= 2; pin--){
    digitalWrite(pin, HIGH); //Turn LED on
    delay(time); //Speed of the "dance"
    digitalWrite(pin, LOW); //Turn LED off
    }
}


