// ˅
#include "creational_patterns/factory_method/id_card/CreditCard.h"
#include "creational_patterns/factory_method/id_card/CreditCardFactory.h"

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

shared_ptr<Product> CreditCardFactory::createProduct(const string& owner)
{
	// ˅
	return shared_ptr<Product>(new CreditCard(owner));
	// ˄
}

void CreditCardFactory::registerProduct(shared_ptr<Product> product)
{
	// ˅
	card_owners.push_back(dynamic_pointer_cast<CreditCard>(product)->owner);
	// ˄
}

vector<string> CreditCardFactory::getCardOwner()
{
	// ˅
	return card_owners;
	// ˄
}

// ˅

// ˄
