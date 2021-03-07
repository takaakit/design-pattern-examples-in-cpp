// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_BUILDER_PLAINTEXTBUILDER_H_
#define CREATIONAL_PATTERNS_BUILDER_PLAINTEXTBUILDER_H_

// ˅
#include <string>
#include <sstream>
#include "creational_patterns/builder/Builder.h"

using namespace std;

// ˄

class PlainTextBuilder : public Builder
{
	// ˅
	
	// ˄

private:

	stringstream buffer;

public:

	PlainTextBuilder();

	~PlainTextBuilder();

	// Make a title of plain text
	void createTitle(const string& title);

	// Make a section of plain text
	void createSection(const string& section);

	// Make items of plain text
	void createItems(const vector<string> items);

	void close();

	// String to output
	const string getContent() const;

	// ˅
public:
	
protected:
	
private:
	PlainTextBuilder(const PlainTextBuilder&) = delete;
	PlainTextBuilder& operator=(const PlainTextBuilder&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_BUILDER_PLAINTEXTBUILDER_H_

// ˅

// ˄
