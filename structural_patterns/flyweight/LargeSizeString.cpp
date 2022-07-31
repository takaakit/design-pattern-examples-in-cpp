// ˅
#include "structural_patterns/flyweight/LargeSizeChar.h"
#include "structural_patterns/flyweight/LargeSizeCharFactory.h"
#include "structural_patterns/flyweight/LargeSizeString.h"

// ˄

LargeSizeString::LargeSizeString(const string& string_data)
	// ˅
	
	// ˄
{
	// ˅
    for (char char_data : string_data) {
        large_size_chars.push_back(LargeSizeCharFactory::getInstance()->getLargeSizeChar(char_data));
    }
	// ˄
}

LargeSizeString::~LargeSizeString()
{
	// ˅
	
	// ˄
}

void LargeSizeString::display() const
{
	// ˅
	for (LargeSizeChar* large_size_char : large_size_chars) {
		large_size_char->display();
	}
	// ˄
}

// ˅

// ˄
