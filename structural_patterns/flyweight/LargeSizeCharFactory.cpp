// ˅
#include <map>
#include <string>
#include "structural_patterns/flyweight/LargeSizeChar.h"
#include "structural_patterns/flyweight/LargeSizeCharFactory.h"

using namespace std;

// ˄

LargeSizeCharFactory* LargeSizeCharFactory::getInstance()
{
	// ˅
	static LargeSizeCharFactory* instance = new LargeSizeCharFactory();
	return instance;
	// ˄
}

LargeSizeCharFactory::LargeSizeCharFactory()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

LargeSizeCharFactory::~LargeSizeCharFactory()
{
	// ˅
	
	// ˄
}

LargeSizeChar* LargeSizeCharFactory::getLargeSizeChar(const char char_name)
{
	// ˅
	LargeSizeChar* lsc = nullptr;
	if (pool_chars.find(char_name) == end(pool_chars)) {
		lsc = new LargeSizeChar(char_name);							// Create an instance
		pool_chars.insert(map<char, LargeSizeChar*>::value_type(char_name, lsc));
	}
	else {
		lsc = pool_chars.at(char_name);
	}
	return lsc;
	// ˄
}

// ˅

// ˄
