// ˅
#include <iostream>
#include "creational_patterns/prototype/FrameDisplay.h"

using namespace std;

// ˄

FrameDisplay::FrameDisplay(const char border_char)
	: border_char(border_char)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

FrameDisplay::~FrameDisplay()
{
	// ˅
	
	// ˄
}

Display* FrameDisplay::createClone()
{
	// ˅
	return new FrameDisplay(border_char);
	// ˄
}

void FrameDisplay::show(const string& message) const
{
	// ˅
	const int length = static_cast<int>(message.size());
	for (int i = 0; i < length + 4; ++i) {
		cout << border_char;
	}
	cout << endl;
	cout << border_char << " " << message << " " << border_char << endl;
	for (int i = 0; i < length + 4; ++i) {
		cout << border_char;
	}
	cout << endl;
	// ˄
}

// ˅

// ˄
