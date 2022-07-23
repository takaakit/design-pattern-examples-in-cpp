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
	// Write pre-creation code here.

	// Encapsulate the knowledge of which Product subclass to create and move this knowledge out of the framework.
	const Product* product = createProduct(owner);

	// Write post-creation code here.

	return product;
	// ˄
}

// ˅

// ˄
