// ˅
#include "creational_patterns/factory_method/framework/Factory.h"
#include "creational_patterns/factory_method/framework/Product.h"

// ˄

Factory::Factory()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Factory::~Factory()
{
	// ˅
	
	// ˄
}

const Product* Factory::create(const string& owner)
{
	// ˅
	// Write pre-creation code here, if any.

	const Product* product = createProduct(owner);

	// Write post-creation code here, if any.

	return product;
	// ˄
}

// ˅

// ˄
