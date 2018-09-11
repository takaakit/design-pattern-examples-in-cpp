#include <iostream>
#include <memory>
#include "creational_patterns/prototype/framework/Manager.h"
#include "creational_patterns/prototype/UnderlineDisplay.h"
#include "creational_patterns/prototype/FrameDisplay.h"

using namespace std;

// Display a character string enclosed with a frame line, or drawn with an underline.

int main(int argc, char* argv[]) {
	// Create a manager
	unique_ptr<Manager> manager = unique_ptr<Manager>(new Manager());
	unique_ptr<UnderlineDisplay> emphasis_underline = unique_ptr<UnderlineDisplay>(new UnderlineDisplay('~'));
	unique_ptr<FrameDisplay> highlight_frame = unique_ptr<FrameDisplay>(new FrameDisplay('+'));
	unique_ptr<FrameDisplay> warning_frame = unique_ptr<FrameDisplay>(new FrameDisplay('#'));
	manager->registerDisplay("emphasis", emphasis_underline.get());
	manager->registerDisplay("highlight", highlight_frame.get());
	manager->registerDisplay("warning", warning_frame.get());

	// Create displays
	shared_ptr<Display> display1 = manager->getDisplay("emphasis");
	display1->show("Nice to meet you.");
	shared_ptr<Display> display2 = manager->getDisplay("highlight");
	display2->show("Nice to meet you.");
	shared_ptr<Display> display3 = manager->getDisplay("warning");
	display3->show("Nice to meet you.");

	return 0;
}
