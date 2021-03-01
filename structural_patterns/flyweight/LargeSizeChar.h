// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZECHAR_H_
#define STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZECHAR_H_

// ˅
#include <string>

using namespace std;

// ˄

class LargeSizeChar
{
	// ˅
	
	// ˄

private:

	// Display data of the large size character
	string display_data;

public:

	LargeSizeChar(const char char_name);

	~LargeSizeChar();

	// Display the large size character
	void display();

	// ˅
public:
	
protected:
	
private:
	LargeSizeChar(const LargeSizeChar&) = delete;
	LargeSizeChar& operator=(const LargeSizeChar&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZECHAR_H_

// ˅

// ˄
