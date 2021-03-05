// ˅
#include <iostream>
#include <vector>
#include "behavioral_patterns/visitor/ListVisitor.h"
#include "behavioral_patterns/visitor/File.h"
#include "behavioral_patterns/visitor/Directory.h"

using namespace std;

// ˄

ListVisitor::ListVisitor()
	: current_directory("")
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

ListVisitor::~ListVisitor()
{
	// ˅
	
	// ˄
}

void ListVisitor::visit(const File* file)
{
	// ˅
	cout << current_directory << "/" << file->toString() << endl;
	// ˄
}

void ListVisitor::visit(const Directory* directory)
{
	// ˅
	cout << current_directory << "/" << directory->toString() << endl;
	const string visited_directory = current_directory;
	current_directory = current_directory + "/" + directory->getName();
	for (vector<FileSystemElement*>::const_iterator it = directory->getBeginIterator(); it != directory->getEndIterator(); it++) {
		FileSystemElement* element = *it;
		element->accept(this);
	}
	current_directory = visited_directory;
	// ˄
}

// ˅

// ˄
