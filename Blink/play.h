#include "melody.h"

//class "périodique"
class Play {
private:
	int Te;
	int pin; //pour le buzzer / haute parleur
	bool state;
public:
	void set_sound(melody);
};