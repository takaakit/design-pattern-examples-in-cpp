// ˅
#include "creational_patterns/factory_method/credit_card/CreditCard.h"
#include "creational_patterns/factory_method/credit_card/CreditCardFactory.h"

// ˄

CreditCardFactory::CreditCardFactory()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

CreditCardFactory::~CreditCardFactory()
{
	// ˅
	
	// ˄
}

const Product* CreditCardFactory::createProduct(const string& owner)
{
	// ˅
	return new CreditCard(owner);
	// ˄
}

// ˅

// ˄
