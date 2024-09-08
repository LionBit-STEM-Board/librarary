
/*
  This example demonstrates how to use the LionBitTone library 
  to play the "Happy Birthday" melody using a buzzer connected to the Lionbit board.
  The melody is played on a loop with a delay between repetitions.
*/


#include "lionbittone.h"

const int BUZZER_PIN = 21;  // Define the pin where the buzzer is connected

void setup() {
  // No special setup required
}

void loop() {
  // Play the "Happy Birthday" tune using the LionBitTone library
  playHappyBirthday(BUZZER_PIN);
  delay(5000); // Add a delay of 5 seconds before playing the next melody
  playJingleBells(BUZZER_PIN);
  delay(5000); // Add a delay of 5 seconds before playing the next melody
  playMaryLamb(BUZZER_PIN);
  delay(5000);
  playSriLankaAnthem(BUZZER_PIN);
  delay(5000);
  playTwinkle(BUZZER_PIN);
  delay(5000);
  
  // Add a delay of 5 seconds before playing the melody again
  
}
