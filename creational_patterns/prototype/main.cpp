#include <memory>
#include "creational_patterns/prototype/framework/Manager.h"
#include "creational_patterns/prototype/UnderlineDisplay.h"
#include "creational_patterns/prototype/FrameDisplay.h"

using namespace std;

/*
Display a string enclosed with a frame line, or drawn with an underline. The Client (Main)
registers instances of the Display subclass in the Manager class. When necessary,
the Manager class asks those registered instances to return a clone. The Client (Main)
requires the returned clones to display.
 */

int main(int argc, char* argv[]) {
	unique_ptr<Manager> manager = unique_ptr<Manager>(new Manager());

	// Register instances of the "Display" subclass
	unique_ptr<UnderlineDisplay> emphasis_underline(new UnderlineDisplay('~'));
	manager->registerDisplay("emphasis", emphasis_underline.get());
	unique_ptr<FrameDisplay> highlight_frame(new FrameDisplay('+'));
	manager->registerDisplay("highlight", highlight_frame.get());
	unique_ptr<FrameDisplay> warning_frame(new FrameDisplay('#'));
	manager->registerDisplay("warning", warning_frame.get());

	// Require to display
	shared_ptr<const Display> display1(manager->getDisplay("emphasis"));
	display1->show("Nice to meet you.");
	shared_ptr<const Display> display2(manager->getDisplay("highlight"));
	display2->show("Nice to meet you.");
	shared_ptr<const Display> display3(manager->getDisplay("warning"));
	display3->show("Nice to meet you.");

	return 0;
}
