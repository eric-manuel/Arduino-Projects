//ERIC MANUEL R MANZANERO 
//BSCpE 3A

//variable to control the speed
const int time = 100;
const int customPatternTime = 100;

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
    digitalWrite(pin, HIGH);
    delay(time);
    digitalWrite(pin, LOW);
    }

  //Pattern 3: Outward Design 5x (From middle to outward)
  for(int i = 0; i < 5; i++){//
    for (int pin6 = 6, pin5 = 5; pin5 >= 2, pin6 <= 9; pin5--, pin6++){
      digitalWrite(pin5, HIGH);
      digitalWrite(pin6, HIGH);
      delay(customPatternTime);
      digitalWrite(pin5, LOW); 
      digitalWrite(pin6, LOW);  
    }
  }

  //Pattern 4:
  for(int j = 2; j <= 9; j++){
    digitalWrite(j-1, HIGH);
    digitalWrite(j, HIGH);
    delay(200);
  }

  //Pattern 5:


}
