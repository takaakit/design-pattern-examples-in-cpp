// ˅
#include "creational_patterns/factory_method/framework/Factory.h"
#include "creational_patterns/factory_method/framework/Product.h"

// ˄

Factory::~Factory()
{
	// ˅
	
	// ˄
}

shared_ptr<Product> Factory::create(const string& owner)
{
	// ˅
	shared_ptr<Product> product = createProduct(owner);
	registerProduct(product);
	return product;
	// ˄
}

// ˅

// ˄
