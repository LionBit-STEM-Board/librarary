#include "lionbitsupport.h"

void setup() {
    
}

void loop() {
    // Increment progress bar from 0 to 100
    for (int i = 0; i <= 100; i++) {
        drawProgressBar(i, "red", "Custom Progress", "");  // arguments : increment , Color , Banner Titile , Percentage
        delay(10);                                              
    }

    delay(1000); 

    // Decrement progress bar from 100 to 0 without percentage display
    for (int i = 100; i >= 0; i--) {
        drawProgressBar(i, red, "Reversing Progress", nullptr);
        delay(10);                                             
    }

    delay(1000); 
}
