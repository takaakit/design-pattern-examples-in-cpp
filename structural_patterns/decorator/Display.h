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
	virtual const int getColumns() const = 0;

	// Number of rows
	virtual const int getRows() const = 0;

	virtual const string getLineText(const int row) const = 0;

	// Show all
	void show() const;

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
