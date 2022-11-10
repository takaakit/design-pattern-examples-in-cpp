// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZESTRING_H_
#define STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZESTRING_H_

// ˅
#include <string>
#include <vector>

class LargeSizeChar;

using namespace std;

// ˄

class LargeSizeString
{
	// ˅
	
	// ˄

private:

	vector<LargeSizeChar*> large_size_chars;

public:

	LargeSizeString(const string& string_data);

	~LargeSizeString();

	void display() const;

	// ˅
public:
	
protected:
	
private:
	LargeSizeString(const LargeSizeString&) = delete;
	LargeSizeString& operator=(const LargeSizeString&) = delete;
	LargeSizeString(LargeSizeString&&) = delete;
	LargeSizeString& operator=(LargeSizeString&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_FLYWEIGHT_LARGESIZESTRING_H_

// ˅

// ˄
