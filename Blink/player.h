#include "melody.h"

//class "periodique"
class Play {
private:
	int Te;
	int pin; //pour le buzzer / haute parleur
	bool state;
public:
	void set_sound(melody);
	void set_metronome();
};
