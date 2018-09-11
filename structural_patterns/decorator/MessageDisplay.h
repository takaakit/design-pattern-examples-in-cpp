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
	int getColumns();

	// The number of rows is 1
	int getRows();

	string getLineText(const int row);

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
