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
	return createProduct(owner);
	// ˄
}

// ˅

// ˄
