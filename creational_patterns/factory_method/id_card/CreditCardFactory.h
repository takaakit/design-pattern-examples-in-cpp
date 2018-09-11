// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_FACTORY_METHOD_ID_CARD_CREDITCARDFACTORY_H_
#define CREATIONAL_PATTERNS_FACTORY_METHOD_ID_CARD_CREDITCARDFACTORY_H_

// ˅
#include <string>
#include <vector>
#include "creational_patterns/factory_method/framework/Factory.h"

using namespace std;

// ˄

class CreditCardFactory : public Factory
{
	// ˅
	
	// ˄

private:

	vector<string> card_owners;

public:

	CreditCardFactory();

	~CreditCardFactory();

protected:

	shared_ptr<Product> createProduct(const string& owner);

	void registerProduct(shared_ptr<Product> product);

public:

	vector<string> getCardOwner();

	// ˅
public:
	
protected:
	
private:
	CreditCardFactory(const CreditCardFactory&) = delete;
	CreditCardFactory& operator=(const CreditCardFactory&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_FACTORY_METHOD_ID_CARD_CREDITCARDFACTORY_H_

// ˅

// ˄
