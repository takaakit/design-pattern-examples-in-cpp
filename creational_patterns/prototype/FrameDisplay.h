// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_PROTOTYPE_FRAMEDISPLAY_H_
#define CREATIONAL_PATTERNS_PROTOTYPE_FRAMEDISPLAY_H_

// ˅
#include <string>
#include "creational_patterns/prototype/framework/Display.h"

using namespace std;

// ˄

class FrameDisplay : public Display
{
	// ˅
	
	// ˄

private:

	const char border_char;

public:

	FrameDisplay(const char border_char);

	~FrameDisplay();

	Display* createClone();

	void show(const string& message);

	// ˅
public:
	
protected:
	
private:
	FrameDisplay(const FrameDisplay&) = delete;
	FrameDisplay& operator=(const FrameDisplay&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_PROTOTYPE_FRAMEDISPLAY_H_

// ˅

// ˄
