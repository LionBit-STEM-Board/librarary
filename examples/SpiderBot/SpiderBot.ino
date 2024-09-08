/*
  This example demonstrates controlling the movement of a SpiderBot robot using the Lionbit board.
  The SpiderBot's movements are based on predefined commands within the code.
*/


#include <ESP32Servo.h>
#include <analogWrite.h>
 
#include <ESP32PWM.h>


// Define the servo motor pins
const int servoPins[] = {D2, D3, D4, D5, D6, D7, D8, D9};

// Define the servo angles for each leg position
const int legPositions[][8] = {
  {90, 90, 90, 90, 90, 90, 90, 90},  // Rest position
  {120, 90, 60, 60, 90, 120, 120, 90},  // Forward position
  {60, 90, 120, 120, 90, 60, 60, 90},  // Backward position
  {120, 60, 60, 120, 120, 120, 60, 90},  // Left position
  {60, 120, 120, 60, 60, 60, 120, 90},  // Right position
};

Servo servos[8];

void setup() {
  // Attach the servo objects to their respective pins
  for (int i = 0; i < 8; i++) {
    servos[i].attach(servoPins[i]);
  }
}

void loop() {
  // Move the spider robot through different leg positions
  moveLegs(0);  // Rest position
  delay(1000);

  moveLegs(1);  // Forward position
  delay(1000);

  moveLegs(2);  // Backward position
  delay(1000);

  moveLegs(3);  // Left position
  delay(1000);

  moveLegs(4);  // Right position
  delay(1000);
}

void moveLegs(int positionIndex) {
  // Move the legs to the specified position
  for (int i = 0; i < 8; i++) {
    servos[i].write(legPositions[positionIndex][i]);
  }
}