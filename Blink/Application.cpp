#include "Application.h"


void Application::setup_app(void){

  
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
  //Led led_countdown(PIN_LED_1, OUTPUT);
  //Led led_melody(PIN_LED_2, OUTPUT);
  //changer l'utilisation du LED builtin
  
  button_1.setup_device();
  button_2.setup_device();
  button_3.setup_device();
  button_4.setup_device();
  button_5.setup_device();
  button_6.setup_device();
  button_7.setup_device();  
  buzzer_1.setup_device();  
  buzzer_2.setup_device();  
  //led_countdown.setup_device();
  //led_melody.setup_device();
  
  tab_buttons[0] = button_1;
  tab_buttons[1] = button_2;
  tab_buttons[2] = button_3;
  tab_buttons[3] = button_4;
  tab_buttons[4] = button_5;
  tab_buttons[5] = button_6;
  tab_buttons[6] = button_7;

  tab_buzzers[0]=buzzer_1;
  tab_buzzers[1]=buzzer_2;
  
//initialisation des buttons

//  Melody metronome;
//  metronome.create_metronome();  
//  metronome.play_melody();

  Melody melody1;
  Melody melody2;
//
//  led_countdown.set_led(0);
//  delay(500);
//  led_countdown.set_led(1);
//  delay(500);
//  led_countdown.set_led(0);
//  delay(500);
//  led_countdown.set_led(1);
//  delay(500);
//  led_countdown.set_led(0);
//  
  melody1.setup_melody();
 melody1.record_melody(melody2, tab_buttons, tab_buzzers); //led_countdown, led_melody);
  delay(2000);
  melody2.record_melody(melody1, tab_buttons, tab_buzzers);//, led_countdown, led_melody);
  delay(2000);
  Melody::play_all_melodies(melody1, melody2, tab_buzzers);//, led_melody);
}



void Application::run_app(void){
  
}
