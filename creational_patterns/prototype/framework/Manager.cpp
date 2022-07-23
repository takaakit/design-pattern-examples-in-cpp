// ˅
#include "creational_patterns/prototype/framework/Display.h"
#include "creational_patterns/prototype/framework/Manager.h"

// ˄

Manager::Manager()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Manager::~Manager()
{
	// ˅
	
	// ˄
}

void Manager::registerDisplay(const string& display_name, Display* display)
{
	// ˅
	displays.insert(map<string, Display*>::value_type(display_name, display));
	// ˄
}

const Display* Manager::getDisplay(const string& display_name) const
{
	// ˅
	Display* d = displays.at(display_name);
	return d->clone();		// Create a new object by asking a concrete class to clone itself. Therefore, do not need to know the concrete Display class name.
	// ˄
}

// ˅

// ˄
