// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_TEMPLATE_METHOD_CHARDISPLAY_H_
#define BEHAVIORAL_PATTERNS_TEMPLATE_METHOD_CHARDISPLAY_H_

// ˅
#include "behavioral_patterns/template_method/AbstractDisplay.h"

// ˄

class CharDisplay : public AbstractDisplay
{
	// ˅
	
	// ˄

private:

	const char char_value;

public:

	CharDisplay(const char char_value);

	~CharDisplay();

	void open();

	void write();

	void close();

	// ˅
public:
	
protected:
	
private:
	CharDisplay(const CharDisplay&) = delete;
	CharDisplay& operator=(const CharDisplay&) = delete;
	CharDisplay(CharDisplay&&) = delete;
	CharDisplay& operator=(CharDisplay&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_TEMPLATE_METHOD_CHARDISPLAY_H_

// ˅

// ˄
