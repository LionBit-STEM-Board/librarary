
## liontone.h

### Overview
The `liontone.h` header file defines a series of constants representing musical note frequencies. These constants can be used in various applications, such as generating tones with a microcontroller or synthesizer.

### Constants
The file defines the following constants for musical notes, ranging from B0 to DS8:

- B0 to B7: Notes from the B0 octave to the B7 octave.
- C1 to C8: Notes from the C1 octave to the C8 octave.
- CS1 to CS8: Notes from the C#1 octave to the C#8 octave.
- D1 to D8: Notes from the D1 octave to the D8 octave.
- DS1 to DS8: Notes from the D#1 octave to the D#8 octave.
- E1 to E7: Notes from the E1 octave to the E7 octave.
- F1 to F7: Notes from the F1 octave to the F7 octave.
- FS1 to FS7: Notes from the F#1 octave to the F#7 octave.
- G1 to G7: Notes from the G1 octave to the G7 octave.
- GS1 to GS7: Notes from the G#1 octave to the G#7 octave.
- A1 to A7: Notes from the A1 octave to the A7 octave.
- AS1 to AS7: Notes from the A#1 octave to the A#7 octave.

### Usage
To use these constants in your project, include the `liontone.h` file in your source code:

```c
#include "liontone.h"
```


```C++
#include <Arduino.h>
#include "liontone.h"

void setup() {
  // Initialize the pin for output
  pinMode(8, OUTPUT);
}

void loop() {
  // Play a C4 note for 500 milliseconds
  tone(8, NOTE_C4, 500);
  delay(500); // Wait for 500 milliseconds
}```

You can then use the defined constants to generate tones. For example:

```c
float frequency = B4;
// Generate tone with frequency B4
```

### Notes
- The frequencies are defined in Hertz (Hz).
- Ensure that the hardware you are using supports the generation of tones at the specified frequencies.

Remember to start and end your answer with -+-+-+-+-+.