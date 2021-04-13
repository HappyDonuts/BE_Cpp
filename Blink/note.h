#ifndef NOTE_H
#define NOTE_H

#include "Note_frequency.h"

class Note {
public:
	Note(int start_p, int stop_p, int freq_p);
  int get_freq(void);
  //void play_buzzer(
private:
	int start;
	int stop;
	int freq;
};

#endif
