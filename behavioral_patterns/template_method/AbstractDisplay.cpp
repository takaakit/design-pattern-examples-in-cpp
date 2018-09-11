// ˅
#include "behavioral_patterns/template_method/AbstractDisplay.h"

// ˄

AbstractDisplay::~AbstractDisplay()
{
	// ˅
	
	// ˄
}

void AbstractDisplay::output()
{
	// ˅
	open();
	for (int i = 0; i < 5; ++i) {	// Repeat write 5 times
		write();
	}
	close();
	// ˄
}

// ˅

// ˄
