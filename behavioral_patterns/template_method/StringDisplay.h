// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_TEMPLATE_METHOD_STRINGDISPLAY_H_
#define BEHAVIORAL_PATTERNS_TEMPLATE_METHOD_STRINGDISPLAY_H_

// ˅
#include <string>
#include "behavioral_patterns/template_method/AbstractDisplay.h"

using namespace std;

// ˄

class StringDisplay : public AbstractDisplay
{
	// ˅
	
	// ˄

private:

	const string string_;

	// String width
	const int width;

public:

	StringDisplay(const string& string_);

	~StringDisplay();

	void open();

	void write();

	void close();

private:

	void writeLine();

	// ˅
public:
	
protected:
	
private:
	StringDisplay(const StringDisplay&) = delete;
	StringDisplay& operator=(const StringDisplay&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_TEMPLATE_METHOD_STRINGDISPLAY_H_

// ˅

// ˄
