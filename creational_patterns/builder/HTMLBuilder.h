// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_BUILDER_HTMLBUILDER_H_
#define CREATIONAL_PATTERNS_BUILDER_HTMLBUILDER_H_

// ˅
#include <string>
#include <fstream>
#include "creational_patterns/builder/Builder.h"

using namespace std;

// ˄

class HTMLBuilder : public Builder
{
	// ˅
	
	// ˄

private:

	// File name to create
	string file_name;

	ofstream writer;

public:

	HTMLBuilder();

	~HTMLBuilder();

	// Make a title of HTML file
	void createTitle(const string& title);

	// Make a section of HTML file
	void createSection(const string& section);

	// Make items of HTML file
	void createItems(const vector<string> items);

	void close();

	// Get the file name
	const string getFileName() const;

	// ˅
public:
	
protected:
	
private:
	HTMLBuilder(const HTMLBuilder&) = delete;
	HTMLBuilder& operator=(const HTMLBuilder&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_BUILDER_HTMLBUILDER_H_

// ˅

// ˄
