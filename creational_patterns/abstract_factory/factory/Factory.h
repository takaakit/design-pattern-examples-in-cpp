// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_FACTORY_H_
#define CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_FACTORY_H_

// ˅
#include <string>
#include <memory>

class Page;
class Link;
class Data;

using namespace std;

// ˄

class Factory
{
	// ˅
	
	// ˄

public:

	virtual ~Factory();

	virtual shared_ptr<Page> createPage(const string& title, const string& author) = 0;

	virtual shared_ptr<Link> createLink(const string& name, const string& url) = 0;

	virtual shared_ptr<Data> createData(const string& name) = 0;

	// ˅
public:
	static shared_ptr<Factory> getFactory(const string& class_name);
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_ABSTRACT_FACTORY_FACTORY_FACTORY_H_

// ˅

// ˄
