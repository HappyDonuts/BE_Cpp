#include "melody.h"

//class "p�riodique"
class Play {
private:
	int Te;
	int pin; //pour le buzzer / haute parleur
	bool state;
public:
	void set_sound(melody);
};