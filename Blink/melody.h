#include "note.h"
#include <list>
using namespace std;

class Melody {
public:
	Melody();
	void add_note(Note n);
private:
	list<notes> l_notes;
};