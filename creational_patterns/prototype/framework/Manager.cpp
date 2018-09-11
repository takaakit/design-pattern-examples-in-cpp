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

shared_ptr<Display> Manager::getDisplay(const string& display_name)
{
	// ˅
	Display* d = displays.at(display_name);
	return d->createClone();
	// ˄
}

// ˅

// ˄
