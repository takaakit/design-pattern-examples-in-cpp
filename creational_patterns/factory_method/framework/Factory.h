// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_FACTORY_METHOD_FRAMEWORK_FACTORY_H_
#define CREATIONAL_PATTERNS_FACTORY_METHOD_FRAMEWORK_FACTORY_H_

// ˅
#include <string>
#include <memory>

class Product;

using namespace std;

// ˄

class Factory
{
	// ˅
	
	// ˄

public:

	virtual ~Factory();

	shared_ptr<Product> create(const string& owner);

protected:

	virtual shared_ptr<Product> createProduct(const string& owner) = 0;

	virtual void registerProduct(shared_ptr<Product> product) = 0;

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
