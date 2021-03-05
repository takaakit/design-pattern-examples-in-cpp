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

const int MessageDisplay::getColumns() const
{
	// ˅
	return static_cast<int>(message.size());
	// ˄
}

const int MessageDisplay::getRows() const
{
	// ˅
	return 1;
	// ˄
}

const string MessageDisplay::getLineText(const int row) const
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
