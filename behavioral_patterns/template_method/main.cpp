#include <iostream>
#include <memory>
#include "behavioral_patterns/template_method/CharDisplay.h"
#include "behavioral_patterns/template_method/StringDisplay.h"

using namespace std;

// Display the character and string repeatedly 5 times.

int main(int argc, char* argv[]) {
	unique_ptr<CharDisplay> display1(new CharDisplay('H'));
	display1->output();

	unique_ptr<StringDisplay> display2(new StringDisplay("Hello world."));
	display2->output();

	return 0;
}
