### Updated `README.md`

---

# Lionbit Support Library

The **Lionbit Support Library** provides easy-to-use functions to control features on the Lionbit development board, including its onboard RGB LED (NeoPixel) and custom tone generation with predefined musical notes. This library simplifies working with these features by providing pre-built functions for LED control, music tones, and more.

---

### Features
- **NeoPixel RGB LED Control**:
  - Set colors with simple RGB values (0–255).
  - Predefined fading effect function for seamless color transitions.
  - Fully compatible with the Adafruit NeoPixel library.
- **Custom Tone Generation**:
  - Play custom music tones with predefined musical notes.
  - Simple function to generate sound frequencies directly from the library.
- **Pre-configured Pin Definitions**:
  - No need to manually configure pins for onboard components.

---

### Installation

1. Open the Arduino IDE.
2. Go to `Sketch > Include Library > Manage Libraries`.
3. Search for **Lionbit Support Library** and click **Install**.
4. Ensure the Adafruit NeoPixel library is also installed. It is a dependency of this library.

---

### Usage Instructions

#### RGB LED

1. Include the library in your Arduino sketch:
    ```cpp
    #include "lionbitsupport.h"
    ```

2. Initialize the RGB LED in the `setup()` function:
    ```cpp
    void setup() {
        setupRGB(); // Initialize the onboard NeoPixel RGB LED
    }
    ```

3. Use the provided functions to control the RGB LED:
    ```cpp
    void loop() {
        setRGBColor(255, 0, 0); // Red
        delay(1000);
        setRGBColor(0, 255, 0); // Green
        delay(1000);
        setRGBColor(0, 0, 255); // Blue
        delay(1000);
        fadeRGB(); // Fading effect
    }
    ```

#### Tone Generation

1. Use the library's predefined notes to play sounds:
    ```cpp
    void setup() {
        pinMode(8, OUTPUT); // Set the buzzer pin
    }

    void loop() {
        playTone(8, NOTE_C4, 500); // Play Middle C for 500ms
        delay(500);
        playTone(8, NOTE_D4, 500); // Play D note for 500ms
        delay(500);
    }
    ```

2. Available Notes:
   - Predefined musical notes (e.g., `NOTE_C4`, `NOTE_D4`, `NOTE_E4`) are included for quick use.

---

### NeoPixel Functions

- **`setupRGB()`**: Initializes the NeoPixel LED.
- **`setRGBColor(int red, int green, int blue)`**: Sets the RGB LED color with specified brightness for each color (0–255).
- **`fadeRGB()`**: Demonstrates a fade effect by cycling through colors.

---

### Tone Functions

- **`playTone(int pin, int note, int duration)`**:
  - Plays a tone on the specified pin.
  - Parameters:
    - `pin`: The pin connected to the buzzer.
    - `note`: Predefined musical note.
    - `duration`: Duration of the tone in milliseconds.

- **Predefined Notes**:
  - Includes a wide range of musical notes such as `NOTE_C4`, `NOTE_D4`, `NOTE_E4`, etc.

---

### Dependencies

This library requires the following dependencies, which are automatically installed when you install this library via the Arduino Library Manager:
- [Adafruit NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel)

---

### Example Code

#### RGB LED
```cpp
#include "lionbitsupport.h"

void setup() {
    setupRGB();
}

void loop() {
    setRGBColor(255, 0, 0); // Red
    delay(1000);
    setRGBColor(0, 255, 0); // Green
    delay(1000);
    setRGBColor(0, 0, 255); // Blue
    delay(1000);
    fadeRGB();
}
```

#### Tone Generation
```cpp
#include "lionbitsupport.h"

void setup() {
    pinMode(8, OUTPUT);
}

void loop() {
    playTone(8, NOTE_C4, 500);
    delay(500);
    playTone(8, NOTE_D4, 500);
    delay(500);
    playTone(8, NOTE_E4, 500);
    delay(500);
}
```

---

This library enhances the usability of the Lionbit development board by integrating RGB LED control and tone generation seamlessly. 

--- 

### Pull Request Explanation

---

#### Title: Add NeoPixel RGB LED and Custom Tone Functionality to Lionbit Support Library

---

#### Description:

This pull request integrates support for:
1. **NeoPixel RGB LED**:
   - Added functions to control the onboard NeoPixel LED, including color setting and fading effects.
   - Provided a seamless setup process using `setupRGB()` and utility functions.

2. **Custom Tone Generation**:
   - Included functionality for generating music tones with predefined musical notes.
   - Added support for playing tones on a buzzer with accurate note duration and frequency.

3. **Documentation**:
   - Updated the `README.md` to reflect the new features, including examples for RGB LED control and tone generation.

---

#### Key Changes:
1. Added `Adafruit_NeoPixel` dependency for NeoPixel LED support.
2. Introduced `setupRGB()`, `setRGBColor()`, and `fadeRGB()` functions for RGB LED.
3. Added tone generation support with predefined notes and a `playTone()` function.
4. Updated `README.md` to include detailed usage instructions, examples, and dependencies.

---

#### Why These Changes Are Necessary:
- Simplifies the use of onboard features for developers.
- Enhances the library's utility for educational and hobbyist projects.
- Provides a professional interface for controlling NeoPixel LEDs and generating tones.

---

#### Testing Performed:
- Verified RGB LED functions (`setRGBColor`, `fadeRGB`) with various colors and effects.
- Tested tone generation with predefined notes on a connected buzzer.
- Ensured compatibility with the Arduino IDE.

---

#### How to Test:
1. Install the updated library using the Arduino Library Manager.
2. Run the example sketches provided in the `README.md`.
3. Observe the RGB LED and tone generation outputs for expected behavior.

---

This pull request makes the Lionbit Support Library a comprehensive solution for using the onboard features of the Lionbit development board.
