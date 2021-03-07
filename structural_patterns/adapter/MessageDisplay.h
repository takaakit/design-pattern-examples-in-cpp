// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_ADAPTER_MESSAGEDISPLAY_H_
#define STRUCTURAL_PATTERNS_ADAPTER_MESSAGEDISPLAY_H_

// ˅
#include <string>

using namespace std;

// ˄

class MessageDisplay
{
	// ˅
	
	// ˄

private:

	const string message;

public:

	MessageDisplay(const string& message);

	virtual ~MessageDisplay();

	void displayWithHyphens() const;

	void displayWithBrackets() const;

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

#endif	// STRUCTURAL_PATTERNS_ADAPTER_MESSAGEDISPLAY_H_

// ˅

// ˄
