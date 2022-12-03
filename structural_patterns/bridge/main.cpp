#include <memory>
#include "structural_patterns/bridge/Display.h"
#include "structural_patterns/bridge/MultiLineDisplay.h"
#include "structural_patterns/bridge/TextDisplayImpl.h"

using namespace std;

/*
Display only one line or display the specified number of lines.
 */

int main(int argc, char* argv[]) {
	unique_ptr<DisplayImpl> display_impl1(new TextDisplayImpl("Japan"));
	unique_ptr<Display> d1(new Display(display_impl1.get()));
	d1->output();

	unique_ptr<DisplayImpl> display_impl2(new TextDisplayImpl("The United States of America"));
	unique_ptr<MultiLineDisplay> d2(new MultiLineDisplay(display_impl2.get()));
	d2->output();
	d2->outputMultiple(3);

	return 0;
}
