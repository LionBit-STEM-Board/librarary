//පිළිවෙලින් දැල්විය යුතු පින් හදුන්වා දීම
const int pinMapping[] = {D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, D13}; // Map pin names to pin numbers

void setup() {
  for (int i = 0; i < sizeof(pinMapping) / sizeof(pinMapping[0]); i++) {
    pinMode(pinMapping[i], OUTPUT);  // Set each pin to output mode
    digitalWrite(pinMapping[i], LOW);  // Ensure each pin is LOW at the start
  }
}

void loop() {
   for (int i = 0; i < sizeof(pinMapping) / sizeof(pinMapping[0]); i++) {
    digitalWrite(pinMapping[i] , HIGH);  // Turn on the LED
    delay(70);
    digitalWrite( pinMapping[i] , LOW);   // Turn off the LED
    delay(70);
  }
  
  for (int i = (sizeof(pinMapping) / sizeof(pinMapping[0])) - 1; i >= 0; i--) {
    digitalWrite(pinMapping[i], HIGH);  // Turn on the LED
    delay(70);
    digitalWrite(pinMapping[i], LOW);   // Turn off the LED
    delay(70);
  }
}