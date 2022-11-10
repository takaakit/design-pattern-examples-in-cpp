// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_PROTOTYPE_FRAMEWORK_MANAGER_H_
#define CREATIONAL_PATTERNS_PROTOTYPE_FRAMEWORK_MANAGER_H_

// ˅
#include <map>
#include <string>

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

	const Display* getDisplay(const string& display_name) const;

	// ˅
public:
	
protected:
	
private:
	Manager(const Manager&) = delete;
	Manager& operator=(const Manager&) = delete;
	Manager(Manager&&) = delete;
	Manager& operator=(Manager&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_PROTOTYPE_FRAMEWORK_MANAGER_H_

// ˅

// ˄
