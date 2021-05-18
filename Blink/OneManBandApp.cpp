#include "OneManBandApp.h"

// Devices declaration (Buttons and Buzzers)
Button tab_buttons[7];
Buzzer tab_buzzers[2];

Button button_1(PIN_BUTTON_1, INPUT_PULLUP);
Button button_2(PIN_BUTTON_2, INPUT_PULLUP);
Button button_3(PIN_BUTTON_3, INPUT_PULLUP);
Button button_4(PIN_BUTTON_4, INPUT_PULLUP);
Button button_5(PIN_BUTTON_5, INPUT_PULLUP);
Button button_6(PIN_BUTTON_6, INPUT_PULLUP);
Button button_7(PIN_BUTTON_7, INPUT_PULLUP);
Buzzer buzzer_1(PIN_BUZZER_1, OUTPUT);
Buzzer buzzer_2(PIN_BUZZER_2, OUTPUT);

// Devices initialisation
void OneManBandApp::setup_app(void){
  button_1.setup_device();
  button_2.setup_device();
  button_3.setup_device();
  button_4.setup_device();
  button_5.setup_device();
  button_6.setup_device();
  button_7.setup_device();  
  buzzer_1.setup_device();  
  buzzer_2.setup_device();  
  
  tab_buttons[0] = button_1;
  tab_buttons[1] = button_2;
  tab_buttons[2] = button_3;
  tab_buttons[3] = button_4;
  tab_buttons[4] = button_5;
  tab_buttons[5] = button_6;
  tab_buttons[6] = button_7;

  tab_buzzers[0]=buzzer_1;
  tab_buzzers[1]=buzzer_2;
}

// Creates, records and plays the melodies
void OneManBandApp::run_app(void){
  Melody melody1;
  Melody melody2;

//  Metronome function test. It creates a metronome melody
//  Melody metronome;
//  metronome.create_metronome();  

  // Built in led indicates when the user can record
  pinMode(LED_BUILTIN, OUTPUT); 
 
  // Record first melody
  digitalWrite(LED_BUILTIN,0);
  melody1.record_melody(melody2, tab_buttons, tab_buzzers); //led_countdown, led_melody);
  digitalWrite(LED_BUILTIN,1);
  delay(2000);
  
  // Record second melody
  digitalWrite(LED_BUILTIN,0);
  melody2.record_melody(melody1, tab_buttons, tab_buzzers);//, led_countdown, led_melody);
  digitalWrite(LED_BUILTIN,1);
  delay(2000);
  
  // Play all melodies. Class function
  Melody::play_all_melodies(melody1, melody2, tab_buzzers);//, led_melody);
}
