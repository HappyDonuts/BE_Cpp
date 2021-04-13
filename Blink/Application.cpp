#include "Application.h"
#include "Melody.h"

void Application::setup_app(void){
  Melody metronome;
  for (int i=0;i<10;i++){
    const int timestamp = i*1000;
    Note note_t(timestamp, timestamp+50, NOTE_C4); 
    metronome.add_note(note_t);
  }

  list<Note>::iterator it;
  for (it=metronome.get_list().begin(); it!=metronome.get_list().end(); it++){
    //Serial.print(*it.get_freq());
  }
  

}

void Application::run_app(void){
  
}
