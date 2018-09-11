#include <iostream>
#include <memory>
#include "behavioral_patterns/template_method/CharDisplay.h"
#include "behavioral_patterns/template_method/StringDisplay.h"

using namespace std;

// Display the character and string repeatedly 5 times.

int main(int argc, char* argv[]) {
	unique_ptr<CharDisplay> display1 = unique_ptr<CharDisplay>(new CharDisplay('H'));						// Create an instance of the CharDisplay
	unique_ptr<StringDisplay> display2 = unique_ptr<StringDisplay>(new StringDisplay("Hello world."));		// Create an instance of the StringDisplay
	unique_ptr<StringDisplay> display3 = unique_ptr<StringDisplay>(new StringDisplay("Nice to meet you."));	// Create an instance of the StringDisplay

	// Any instance can be called with the same method name
	display1->output();
	display2->output();
	display3->output();

	return 0;
}
