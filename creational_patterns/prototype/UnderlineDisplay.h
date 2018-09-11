// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_PROTOTYPE_UNDERLINEDISPLAY_H_
#define CREATIONAL_PATTERNS_PROTOTYPE_UNDERLINEDISPLAY_H_

// ˅
#include <string>
#include "creational_patterns/prototype/framework/Display.h"

using namespace std;

// ˄

class UnderlineDisplay : public Display
{
	// ˅
	
	// ˄

private:

	const char underline_char;

public:

	UnderlineDisplay(const char underline_char);

	~UnderlineDisplay();

	shared_ptr<Display> createClone();

	void show(const string& message);

	// ˅
public:
	
protected:
	
private:
	UnderlineDisplay(const UnderlineDisplay&) = delete;
	UnderlineDisplay& operator=(const UnderlineDisplay&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_PROTOTYPE_UNDERLINEDISPLAY_H_

// ˅

// ˄
