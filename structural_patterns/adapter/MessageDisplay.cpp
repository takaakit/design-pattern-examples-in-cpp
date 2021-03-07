// ˅
#include <iostream>
#include "structural_patterns/adapter/MessageDisplay.h"

using namespace std;

// ˄

MessageDisplay::MessageDisplay(const string& message)
	: message(message)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

MessageDisplay::~MessageDisplay()
{
	// ˅
	
	// ˄
}

void MessageDisplay::displayWithHyphens() const
{
	// ˅
	cout << "-- " << message << " --" << endl;
	// ˄
}

void MessageDisplay::displayWithBrackets() const
{
	// ˅
	cout << "[[ " << message << " ]]" << endl;
	// ˄
}

// ˅

// ˄
