#include <Arduino.h>
#include "melody.h"
#include "button.h"

Melody::Melody(){
  array_notes = new int[MELODY_LENGTH];
  for (int i=0;i<MELODY_LENGTH;i++){
    array_notes[i] = 0;
    }
}

void Melody::create_metronome(){
  for (int i=0;i<MELODY_LENGTH/100;i++){
    for (int j=0;j<MELODY_LENGTH/100;j++){ 
      this->array_notes[100*i+j] = NOTE_C4; //100 corr à l'interval entre les notes (la pause)
    }
  }
}

void Melody::setup_melody(){
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  delay(500);
}

void Melody::play_all_melodies(Melody mel_1, Melody mel_2, Buzzer* tab_buzzers){//Led led_melody){
  // Changer vers class Song
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

void Melody::record_melody(Melody mel_2, Button* tab_buttons, Buzzer* tab_buzzers){//, Led led_countdown, Led led_melody){ 
  // Changer vers song  
  
  digitalWrite(LED_BUILTIN,0);
  for (int i=0;i<MELODY_LENGTH;i++){   
    const int button_state_1 = tab_buttons[0].get_button_state(); 
    const int button_state_2 = tab_buttons[1].get_button_state();
    const int button_state_3 = tab_buttons[2].get_button_state();
    const int button_state_4 = tab_buttons[3].get_button_state();
    const int button_state_5 = tab_buttons[4].get_button_state();
    const int button_state_6 = tab_buttons[5].get_button_state();
    const int button_state_7 = tab_buttons[6].get_button_state();
    
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
    if (this->array_notes[i] != 0){
        tab_buzzers[1].play_tone(this->array_notes[i], NOTE_LENGTH);
    }

    
    if (mel_2.array_notes[i] != 0){
      tab_buzzers[0].play_tone(mel_2.array_notes[i], NOTE_LENGTH);
      
    }
    if (this->array_notes[i] != 0){
        tab_buzzers[1].play_tone(this->array_notes[i], NOTE_LENGTH);
        //led_melody.set_led(0);
    }

    delay(10);
    //led_melody.set_led(1);
  }
  digitalWrite(LED_BUILTIN,1);
  //led_countdown.set_led(1);

}
