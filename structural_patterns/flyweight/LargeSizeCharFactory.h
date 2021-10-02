// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZECHARFACTORY_H_
#define STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZECHARFACTORY_H_

// ˅
#include <map>
#include <memory>

class LargeSizeChar;

using namespace std;

// ˄

class LargeSizeCharFactory
{
	// ˅
	
	// ˄

private:

	map<char, LargeSizeChar*> pool_chars;

	static LargeSizeCharFactory* instance;

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
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZECHARFACTORY_H_

// ˅

// ˄
