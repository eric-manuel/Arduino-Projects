const int numBits = 4;  // Number of binary bits
const int pins[numBits] = {2, 3, 4, 5};  // LED pins

void setup() {
    for (int i = 0; i < numBits; i++) {
        pinMode(pins[i], OUTPUT);
    }
}

void loop() {
    for (int count = 0; count < (1 << numBits); count++) {
        displayBinary(count);
        delay(1000);  // Half-second delay
    }
}

void displayBinary(int number) {
    for (int i = 0; i < numBits; i++) {
        digitalWrite(pins[i], (number >> i) & 1);  // Extract bit and set LED
    }
}
