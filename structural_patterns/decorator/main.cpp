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

	unique_ptr<Display> diaplay_b1(new MessageDisplay("Nice to meet you."));
	unique_ptr<Display> display_b2(new SideFrame(diaplay_b1.get(), '!'));
	display_b2->show();

	unique_ptr<Display> display_c1(new MessageDisplay("Nice to meet you."));
	unique_ptr<Display> display_c2(new SideFrame(display_c1.get(), '!'));
	unique_ptr<Display> display_c3(new FullFrame(display_c2.get()));
	display_c3->show();

	return 0;
}
