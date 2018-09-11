// ˅
#include <map>
#include <string>
#include "structural_patterns/flyweight/LargeSizeChar.h"
#include "structural_patterns/flyweight/LargeSizeCharFactory.h"

using namespace std;

// ˄

LargeSizeCharFactory* LargeSizeCharFactory::instance = nullptr;

LargeSizeCharFactory* LargeSizeCharFactory::getInstance()
{
	// ˅
	if (instance == nullptr) {
		instance = new LargeSizeCharFactory();
	}
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

shared_ptr<LargeSizeChar> LargeSizeCharFactory::getLargeSizeChar(const char char_name)
{
	// ˅
    shared_ptr<LargeSizeChar> lsc = nullptr;
    if (pool_chars.find(to_string(char_name)) == pool_chars.end()) {
        lsc = shared_ptr<LargeSizeChar>(new LargeSizeChar(char_name));
		pool_chars.insert(map<string, shared_ptr<LargeSizeChar>>::value_type(to_string(char_name), lsc));
    }
    else {
		lsc = pool_chars.at(to_string(char_name));
    }
	return lsc;
	// ˄
}

// ˅

// ˄
