// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_BUILDER_BUILDER_H_
#define CREATIONAL_PATTERNS_BUILDER_BUILDER_H_

// ˅
#include <string>
#include <vector>

using namespace std;

// ˄

class Builder
{
	// ˅
	
	// ˄

public:

	virtual ~Builder();

	virtual void createTitle(const string& title) = 0;

	virtual void createSection(const string& section) = 0;

	virtual void createItems(vector<string> items) = 0;

	virtual void close() = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_BUILDER_BUILDER_H_

// ˅

// ˄
