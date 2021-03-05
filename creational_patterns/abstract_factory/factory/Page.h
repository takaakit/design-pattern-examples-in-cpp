// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_PAGE_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_PAGE_H_

// ˅
#include <string>
#include <vector>
#include <memory>

class Item;

using namespace std;

// ˄

class Page
{
	// ˅
	
	// ˄

protected:

	const string title;

	const string author;

	vector<Item*> contents;

public:

	Page(const string& title, const string& author);

	virtual ~Page();

	virtual const string toHTML() const = 0;

	void add(Item* item);

	void output() const;

	// ˅
public:
	
protected:
	
private:
	Page(const Page&) = delete;
	Page& operator=(const Page&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_PAGE_H_

// ˅

// ˄
