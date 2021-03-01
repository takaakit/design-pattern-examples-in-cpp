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

Product* Factory::create(const string& owner)
{
	// ˅
	return createProduct(owner);
	// ˄
}

// ˅

// ˄
