// ˅
#include <iostream>
#include "structural_patterns/decorator/Display.h"

using namespace std;

// ˄

Display::~Display()
{
	// ˅
	
	// ˄
}

void Display::show() const
{
	// ˅
	for (int i = 0; i < getRows(); ++i) {
		cout << getLineText(i) << endl;
	}
	// ˄
}

// ˅

// ˄
