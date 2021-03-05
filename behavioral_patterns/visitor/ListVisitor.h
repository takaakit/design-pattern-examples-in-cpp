// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_VISITOR_LISTVISITOR_H_
#define BEHAVIORAL_PATTERNS_VISITOR_LISTVISITOR_H_

// ˅
#include <string>
#include "behavioral_patterns/visitor/Visitor.h"

class File;
class Directory;

using namespace std;

// ˄

class ListVisitor : public Visitor
{
	// ˅
	
	// ˄

private:

	// Currently visited directory
	string current_directory;

public:

	ListVisitor();

	~ListVisitor();

	// Visit a file
	void visit(const File* file);

	// Visit a directory
	void visit(const Directory* directory);

	// ˅
public:
	
protected:
	
private:
	ListVisitor(const ListVisitor&) = delete;
	ListVisitor& operator=(const ListVisitor&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_VISITOR_LISTVISITOR_H_

// ˅

// ˄
