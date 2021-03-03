#include <iostream>
#include <memory>
#include "structural_patterns/decorator/Display.h"
#include "structural_patterns/decorator/MessageDisplay.h"
#include "structural_patterns/decorator/SideFrame.h"
#include "structural_patterns/decorator/FullFrame.h"

using namespace std;

/*
Display a string with decorative frames. The frames can be combined arbitrarily.
 */

int main(int argc, char* argv[]) {
	unique_ptr<Display> display_a(new MessageDisplay("Nice to meet you."));
	display_a->show();

	unique_ptr<Display> display_b(new SideFrame(new MessageDisplay("Nice to meet you."), '!'));
	display_b->show();

	unique_ptr<Display> display_c(new FullFrame(new SideFrame(new MessageDisplay("Nice to meet you."), '!')));
	display_c->show();

	return 0;
}
