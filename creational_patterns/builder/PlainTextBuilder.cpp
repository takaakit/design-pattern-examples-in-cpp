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
	for (string item : items) {
		buffer << "  - " << item << endl;					// Items
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
