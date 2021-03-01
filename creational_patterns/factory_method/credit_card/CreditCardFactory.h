// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_FACTORY_METHOD_CREDIT_CARD_CREDITCARDFACTORY_H_
#define CREATIONAL_PATTERNS_FACTORY_METHOD_CREDIT_CARD_CREDITCARDFACTORY_H_

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

public:

	CreditCardFactory();

	~CreditCardFactory();

protected:

	Product* createProduct(const string& owner);

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

#endif	// CREATIONAL_PATTERNS_FACTORY_METHOD_CREDIT_CARD_CREDITCARDFACTORY_H_

// ˅

// ˄
