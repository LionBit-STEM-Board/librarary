#include "lionbitsupport.h"

void setup() {
    
}

void loop() {
    // Increment progress bar from 0 to 100
    for (int i = 0; i <= 100; i++) {
        drawProgressBar(i, "blue", "Custom Progress", "");  // Aruguments : Progress, Color, Title, Percentage
        delay(10);                                              
    }

    delay(1000); 

    // Decrement progress bar from 100 to 0 without percentage display
    for (int i = 100; i >= 0; i--) {
        drawProgressBar(i, red, "Reversing Progress", nullptr); // Custom color and no percentage
        delay(10);                                                    // Simulate progress
    }

    delay(1000); // Pause for 1 second before restarting
}
