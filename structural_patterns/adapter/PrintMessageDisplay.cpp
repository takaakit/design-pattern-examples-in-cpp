// ˅
#include "structural_patterns/adapter/PrintMessageDisplay.h"

// ˄

PrintMessageDisplay::PrintMessageDisplay(const string& message)
	// ˅
	: MessageDisplay(message)
	// ˄
{
	// ˅
	
	// ˄
}

PrintMessageDisplay::~PrintMessageDisplay()
{
	// ˅
	
	// ˄
}

void PrintMessageDisplay::printWeak() const
{
	// ˅
	displayWithHyphens();
	// ˄
}

void PrintMessageDisplay::printStrong() const
{
	// ˅
	displayWithBrackets();
	// ˄
}

// ˅

// ˄
