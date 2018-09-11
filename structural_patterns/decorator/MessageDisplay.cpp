// ˅
#include "structural_patterns/decorator/MessageDisplay.h"

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

int MessageDisplay::getColumns()
{
	// ˅
	return static_cast<int>(message.size());
	// ˄
}

int MessageDisplay::getRows()
{
	// ˅
	return 1;
	// ˄
}

string MessageDisplay::getLineText(const int row)
{
	// ˅
	if (row == 0) {
		return message;
	}
	else {
		return "";
	}
	// ˄
}

// ˅

// ˄
