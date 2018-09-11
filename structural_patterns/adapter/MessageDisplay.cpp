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

void MessageDisplay::displayWithHyphens()
{
	// ˅
	cout << "-- " << message << " --" << endl;
	// ˄
}

void MessageDisplay::displayWithBrackets()
{
	// ˅
	cout << "[[ " << message << " ]]" << endl;
	// ˄
}

// ˅

// ˄
