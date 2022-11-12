// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZECHARFACTORY_H_
#define STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZECHARFACTORY_H_

// ˅
#include <map>

class LargeSizeChar;

using namespace std;

// ˄

// Singleton ( based on the example code on Wikipedia )
//   https://en.wikipedia.org/w/index.php?title=Singleton_pattern&oldid=1115882454#C++
//   Note: The latest Wikipedia page has had the C++ code example removed. This link is to the page before it was removed.
class LargeSizeCharFactory
{
	// ˅
	
	// ˄

private:

	map<char, LargeSizeChar*> pool_chars;

public:

	static LargeSizeCharFactory* getInstance();

private:

	LargeSizeCharFactory();

public:

	~LargeSizeCharFactory();

	// Create an instance of the large size character.
	LargeSizeChar* getLargeSizeChar(const char char_name);

	// ˅
public:
	
protected:
	
private:
	LargeSizeCharFactory(const LargeSizeCharFactory&) = delete;
	LargeSizeCharFactory& operator=(const LargeSizeCharFactory&) = delete;
	LargeSizeCharFactory(LargeSizeCharFactory&&) = delete;
	LargeSizeCharFactory& operator=(LargeSizeCharFactory&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZECHARFACTORY_H_

// ˅

// ˄
