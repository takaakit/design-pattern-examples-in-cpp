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

void PrintMessageDisplay::printWeak()
{
	// ˅
	displayWithHyphens();
	// ˄
}

void PrintMessageDisplay::printStrong()
{
	// ˅
	displayWithBrackets();
	// ˄
}

// ˅

// ˄
