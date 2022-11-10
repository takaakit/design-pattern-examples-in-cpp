// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_FACTORY_METHOD_FRAMEWORK_FACTORY_H_
#define CREATIONAL_PATTERNS_FACTORY_METHOD_FRAMEWORK_FACTORY_H_

// ˅
#include <string>

class Product;

using namespace std;

// ˄

class Factory
{
	// ˅
	
	// ˄

public:

	Factory();

	virtual ~Factory();

	const Product* create(const string& owner);

protected:

	virtual const Product* createProduct(const string& owner) = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_FACTORY_METHOD_FRAMEWORK_FACTORY_H_

// ˅

// ˄
