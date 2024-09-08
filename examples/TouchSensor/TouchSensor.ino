/*
  This example demonstrates how to use a touch sensor with the Lionbit board.
  The code reacts to input from a touch sensor connected to a specified pin.
*/

volatile int capacitiveValue=100;
volatile int threshold=10;

void setup() {
   
    Serial.begin(115200);
    delay(1000); // Delay to launch the serial monitor
    Serial.println("ESP32 Touch Demo");
}

void loop() {
    capacitiveValue = touchRead(A4);
    if(capacitiveValue < threshold ){
        Serial.println("Wire touched");
        }
         Serial.println("Wire Not");
    delay(500);
}