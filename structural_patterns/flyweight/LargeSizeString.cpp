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
    for (int i = 0; i < static_cast<int>(string_data.size()); ++i) {
        large_size_chars.push_back(LargeSizeCharFactory::getInstance()->getLargeSizeChar(string_data.at(i)));
    }
	// ˄
}

LargeSizeString::~LargeSizeString()
{
	// ˅
	
	// ˄
}

void LargeSizeString::display()
{
	// ˅
	for (int i = 0; i < static_cast<int>(large_size_chars.size()); ++i) {
        large_size_chars.at(i)->display();
	}
	// ˄
}

// ˅

// ˄
