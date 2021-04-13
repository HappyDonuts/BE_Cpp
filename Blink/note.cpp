#include "Note_frequency.h"
#include "Note.h"


Note::Note(int start_p, int stop_p, int freq_p) {
	this->start = start_p;
	this->stop = stop_p;
	this->freq = freq_p;
}

int Note::get_freq(void){
  return this->freq;
}
