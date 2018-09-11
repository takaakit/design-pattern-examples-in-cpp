#include <iostream>
#include <memory>
#include "structural_patterns/bridge/Display.h"
#include "structural_patterns/bridge/MultiLineDisplay.h"
#include "structural_patterns/bridge/TextDisplayImpl.h"

using namespace std;

// Display only one line or display the specified number of lines.

int main(int argc, char* argv[]) {
	unique_ptr<DisplayImpl> display_impl1 = unique_ptr<DisplayImpl>(new TextDisplayImpl("Japan"));
    unique_ptr<Display> d1 = unique_ptr<Display>(new Display(display_impl1.get()));
	unique_ptr<DisplayImpl> display_impl2 = unique_ptr<DisplayImpl>(new TextDisplayImpl("The United States of America"));
	unique_ptr<MultiLineDisplay> d2 = unique_ptr<MultiLineDisplay>(new MultiLineDisplay(display_impl2.get()));
	unique_ptr<DisplayImpl> display_impl3 = unique_ptr<DisplayImpl>(new TextDisplayImpl("Brazil"));
	unique_ptr<MultiLineDisplay> d3 = unique_ptr<MultiLineDisplay>(new MultiLineDisplay(display_impl3.get()));
    d1->output();
    d2->output();
    d3->output();
    d3->outputMultiple(3);

	return 0;
}
