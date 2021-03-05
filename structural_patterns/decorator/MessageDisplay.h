// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_DECORATOR_MESSAGEDISPLAY_H_
#define STRUCTURAL_PATTERNS_DECORATOR_MESSAGEDISPLAY_H_

// ˅
#include <string>
#include "structural_patterns/decorator/Display.h"

using namespace std;

// ˄

class MessageDisplay : public Display
{
	// ˅
	
	// ˄

private:

	// Message to be displayed
	const string message;

public:

	MessageDisplay(const string& message);

	~MessageDisplay();

	// Number of characters
	const int getColumns() const;

	// The number of rows is 1
	const int getRows() const;

	const string getLineText(const int row) const;

	// ˅
public:
	
protected:
	
private:
	MessageDisplay(const MessageDisplay&) = delete;
	MessageDisplay& operator=(const MessageDisplay&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_DECORATOR_MESSAGEDISPLAY_H_

// ˅

// ˄
