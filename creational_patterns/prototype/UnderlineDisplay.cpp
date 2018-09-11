// ˅
#include <iostream>
#include "creational_patterns/prototype/UnderlineDisplay.h"

using namespace std;

// ˄

UnderlineDisplay::UnderlineDisplay(const char underline_char)
	: underline_char(underline_char)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

UnderlineDisplay::~UnderlineDisplay()
{
	// ˅
	
	// ˄
}

shared_ptr<Display> UnderlineDisplay::createClone()
{
	// ˅
	return shared_ptr<Display>(new UnderlineDisplay(underline_char));
	// ˄
}

void UnderlineDisplay::show(const string& message)
{
	// ˅
	const int length = static_cast<int>(message.size());
	cout << "\"" << message << "\"" << endl;
	cout << " ";
	for (int i = 0; i < length; ++i) {
		cout << underline_char;
	}
	cout << endl;
	// ˄
}

// ˅

// ˄
