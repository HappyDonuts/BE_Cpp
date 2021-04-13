#include "note.h"
#include <list>
using namespace std;

class Melody {
  public:
  	Melody();
  	void add_note(Note n);
    list<Note> get_list(void);
  private:
  	list<Note> l_notes;
};
