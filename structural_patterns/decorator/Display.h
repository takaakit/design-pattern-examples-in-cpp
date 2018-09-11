// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_DECORATOR_DISPLAY_H_
#define STRUCTURAL_PATTERNS_DECORATOR_DISPLAY_H_

// ˅
#include <string>

using namespace std;

// ˄

class Display
{
	// ˅
	
	// ˄

public:

	virtual ~Display();

	// Column width
	virtual int getColumns() = 0;

	// Number of rows
	virtual int getRows() = 0;

	virtual string getLineText(const int row) = 0;

	// Show all
	void show();

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_DECORATOR_DISPLAY_H_

// ˅

// ˄
