// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_PROTOTYPE_FRAMEWORK_MANAGER_H_
#define CREATIONAL_PATTERNS_PROTOTYPE_FRAMEWORK_MANAGER_H_

// ˅
#include <map>
#include <string>
#include <memory>

class Display;

using namespace std;

// ˄

class Manager
{
	// ˅
	
	// ˄

private:

	map<string, Display*> displays;

public:

	Manager();

	~Manager();

	void registerDisplay(const string& display_name, Display* display);

	shared_ptr<Display> getDisplay(const string& display_name);

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_PROTOTYPE_FRAMEWORK_MANAGER_H_

// ˅

// ˄
