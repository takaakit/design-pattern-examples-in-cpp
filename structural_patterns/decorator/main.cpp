#include <iostream>
#include <memory>
#include "structural_patterns/decorator/Display.h"
#include "structural_patterns/decorator/MessageDisplay.h"
#include "structural_patterns/decorator/SideFrame.h"
#include "structural_patterns/decorator/FullFrame.h"

using namespace std;

// Display a character string with a decorative frame.

int main(int argc, char* argv[]) {
	unique_ptr<Display> display_a = unique_ptr<Display>(new MessageDisplay("Nice to meet you."));
	display_a->show();

	unique_ptr<Display> display_b = unique_ptr<Display>(new SideFrame(display_a.get(), '!'));
	display_b->show();

	unique_ptr<Display> display_c = unique_ptr<Display>(new FullFrame(display_b.get()));
	display_c->show();

	unique_ptr<Display> display_d = unique_ptr<Display>(new MessageDisplay("See you again."));
	unique_ptr<Display> display_e = unique_ptr<Display>(new FullFrame(display_d.get()));
	unique_ptr<Display> display_f = unique_ptr<Display>(new SideFrame(display_e.get(), '#'));
	unique_ptr<Display> display_g = unique_ptr<Display>(new SideFrame(display_f.get(), '#'));
	unique_ptr<Display> display_h = unique_ptr<Display>(new FullFrame(display_g.get()));
	unique_ptr<Display> display_i = unique_ptr<Display>(new FullFrame(display_h.get()));
	unique_ptr<Display> display_j = unique_ptr<Display>(new SideFrame(display_i.get(), '#'));
	display_j->show();

	return 0;
}
