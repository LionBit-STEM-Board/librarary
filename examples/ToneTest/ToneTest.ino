/*
  This example demonstrates how to generate various tones using the tone() function.
  A buzzer connected to the Lionbit board will play different frequencies.
*/

int BUZZER_PIN = 21;
int BUZZER_CHANNEL = 0;



void setup() {

  ledcAttachPin(BUZZER_PIN, BUZZER_CHANNEL);
}
void loop() {
  
    ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_A, 4);
      delay(150);
          ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_B, 5);
      delay(20);
          ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_C, 5);
      delay(20);
          ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_D, 5);
      delay(20);
          ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_E, 5);
      delay(20);
          ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_A, 3);
      delay(30);
          ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_C, 5);
      delay(20);
          ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_C, 6);
      delay(20);
          ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_F, 5);
      delay(30);
          ledcWriteNote(BUZZER_CHANNEL, (note_t)NOTE_G, 5);
      delay(20);
  
}    