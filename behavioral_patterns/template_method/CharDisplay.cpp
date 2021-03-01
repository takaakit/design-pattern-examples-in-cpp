// ˅
#include <iostream>
#include "behavioral_patterns/template_method/CharDisplay.h"

using namespace std;

// ˄

CharDisplay::CharDisplay(const char char_value)
	: char_value(char_value)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

CharDisplay::~CharDisplay()
{
	// ˅
	
	// ˄
}

void CharDisplay::open()
{
	// ˅
	cout << "<<";			// Display "<<" in the start characters.
	// ˄
}

void CharDisplay::write()
{
	// ˅
	cout << char_value;		// Display the character.
	// ˄
}

void CharDisplay::close()
{
	// ˅
	cout << ">>" << endl;	// Display ">>" in the end characters.
	// ˄
}

// ˅

// ˄
