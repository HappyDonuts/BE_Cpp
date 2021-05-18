#include <Arduino.h>
#include "melody.h"
#include "button.h"

// Constructor, initilizes the array with zeros
Melody::Melody(){
  array_notes = new int[MELODY_LENGTH];
  for (int i=0;i<MELODY_LENGTH;i++){
    array_notes[i] = 0;
    }
}

// Index operator overcharge
int& Melody::operator[] (const int i){  
  return(this->array_notes[i]); 
}

// Creates metronome melody
void Melody::create_metronome(){
  for (int i=0;i<MELODY_LENGTH/100;i++){
    for (int j=0;j<MELODY_LENGTH/100;j++){ 
      this->array_notes[100*i+j] = NOTE_C4; //100 corr à l'interval entre les notes (la pause)
    }
  }
}

// Plays all recorded melodies
void Melody::play_all_melodies(Melody mel_1, Melody mel_2, Buzzer* tab_buzzers){//Led led_melody){
  // Both melodies are played at the same time on different buzzers
  for (int i=0;i<MELODY_LENGTH;i++){
    if (mel_1.array_notes[i] != 0){
      tab_buzzers[0].play_tone(mel_1.array_notes[i], NOTE_LENGTH);
      //led_melody.set_led(0);
    }
    if (mel_2.array_notes[i] != 0){
      tab_buzzers[1].play_tone(mel_2.array_notes[i], NOTE_LENGTH);
      //led_melody.set_led(0);
    }
    //led_melody.set_led(1);
    delay(10);
  }
  
}

// Records a new melody while playing the previous one
void Melody::record_melody(Melody mel_2, Button* tab_buttons, Buzzer* tab_buzzers){//, Led led_countdown, Led led_melody){ 
  // All buttons are read
  for (int i=0;i<MELODY_LENGTH;i++){
  //  try {   
      const int button_state_1 = tab_buttons[0].get_button_state(); 
      const int button_state_2 = tab_buttons[1].get_button_state();
      const int button_state_3 = tab_buttons[2].get_button_state();
      const int button_state_4 = tab_buttons[3].get_button_state();
      const int button_state_5 = tab_buttons[4].get_button_state();
      const int button_state_6 = tab_buttons[5].get_button_state();
      const int button_state_7 = tab_buttons[6].get_button_state();
  //  } catch (int e) {
  //    if (e == ERREUR_PULLMODE) {
  //      cout << "Les boutons ne sont pas en pull up mode" << endl;
  //    }
  //  }

    // Notes are added to the melody sequency depending on which button has been pressed
    if (button_state_1 == 0){
      this->array_notes[i] = NOTE_C4; 
        }   
    if (button_state_2 == 0){
      this->array_notes[i] = NOTE_D4; 
    }   
    if (button_state_3 == 0){
      this->array_notes[i] = NOTE_E4; 
    }   
    if (button_state_4 == 0){
      this->array_notes[i] = NOTE_F4; 
    }
    if (button_state_5 == 0){
      this->array_notes[i] = NOTE_G4; 
    }
    if (button_state_6 == 0){
        this->array_notes[i] = NOTE_A4; 
    }
    if (button_state_7 == 0){
        this->array_notes[i] = NOTE_B4; 
    }

    // When a button is pressed, the note is also played
    if (this->array_notes[i] != 0){
        tab_buzzers[1].play_tone(this->array_notes[i], NOTE_LENGTH);
    }
    // Previously recorded melody is also played
    if (mel_2.array_notes[i] != 0){
      tab_buzzers[0].play_tone(mel_2.array_notes[i], NOTE_LENGTH);    
    }

    // The loop is iterarted every 10 ms
    delay(10);
    //led_melody.set_led(1);
  }
  //led_countdown.set_led(1);

}
