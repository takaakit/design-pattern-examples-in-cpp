// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_PROTOTYPE_FRAMEWORK_DISPLAY_H_
#define CREATIONAL_PATTERNS_PROTOTYPE_FRAMEWORK_DISPLAY_H_

// ˅
#include <string>
#include <memory>

class Display;

using namespace std;

// ˄

class Display
{
	// ˅
	
	// ˄

public:

	virtual ~Display();

	virtual Display* clone() = 0;

	virtual void show(const string& message) const = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_PROTOTYPE_FRAMEWORK_DISPLAY_H_

// ˅

// ˄
