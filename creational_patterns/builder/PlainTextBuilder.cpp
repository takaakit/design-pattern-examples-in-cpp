// ˅
#include "creational_patterns/builder/PlainTextBuilder.h"

// ˄

PlainTextBuilder::PlainTextBuilder()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

PlainTextBuilder::~PlainTextBuilder()
{
	// ˅
	
	// ˄
}

string PlainTextBuilder::result()
{
	// ˅
	return buffer.str();
	// ˄
}

void PlainTextBuilder::createTitle(const string& title)
{
	// ˅
	buffer << "--------------------------------" << endl;	// Decoration line
	buffer << "[" << title << "]" << endl;					// Title
	buffer << endl;											// Blank line
	// ˄
}

void PlainTextBuilder::createSection(const string& section)
{
	// ˅
	buffer << "* " << section << endl;						// Section
	buffer << endl;											// Blank line
	// ˄
}

void PlainTextBuilder::createItems(vector<string> items)
{
	// ˅
	vector<string>::const_iterator it = items.begin();
	while (it != items.end()) {
		buffer << "  - " << (*it) << endl;					// Items
		++it;
	}
	buffer << endl;											// Blank line
	// ˄
}

void PlainTextBuilder::close()
{
	// ˅
	buffer << "--------------------------------" << endl;	// Decoration line
	// ˄
}

// ˅

// ˄
