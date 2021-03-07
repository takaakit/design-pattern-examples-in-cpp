// ˅
#include "creational_patterns/builder/HTMLBuilder.h"

// ˄

HTMLBuilder::HTMLBuilder()
	: file_name("")
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

HTMLBuilder::~HTMLBuilder()
{
	// ˅
	
	// ˄
}

void HTMLBuilder::createTitle(const string& title)
{
	// ˅
	file_name = title + ".html";		// Set a title as a file name
	writer.open(file_name);
	writer << "<html><head><title>" << title << "</title></head><body>" << endl;	// Write a title
	writer << "<h1>" << title << "</h1>" << endl;
	// ˄
}

void HTMLBuilder::createSection(const string& section)
{
	// ˅
	writer << "<p>" << section << "</p>" << endl;	// Write a section
	// ˄
}

void HTMLBuilder::createItems(const vector<string> items)
{
	// ˅
	writer << "<ul>" << endl;			// Write items
	for (string item : items) {
		writer << "<li>" << item << "</li>" << endl;
	}
	writer << "</ul>" << endl;
	// ˄
}

void HTMLBuilder::close()
{
	// ˅
	writer << "</body></html>" << endl;
	writer.close();						// Close file
	// ˄
}

const string HTMLBuilder::getFileName() const
{
	// ˅
	return file_name;
	// ˄
}

// ˅

// ˄
