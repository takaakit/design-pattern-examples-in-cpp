// ˅

// ˄

#ifndef CREATIONAL_PATTERNS_FACTORY_METHOD_ID_CARD_CREDITCARD_H_
#define CREATIONAL_PATTERNS_FACTORY_METHOD_ID_CARD_CREDITCARD_H_

// ˅
#include <string>
#include "creational_patterns/factory_method/framework/Product.h"

using namespace std;

// ˄

class CreditCard : public Product
{
	// ˅
	
	// ˄

public:

	string owner;

	CreditCard(const string& owner);

	~CreditCard();

	void use();

	// ˅
public:
	
protected:
	
private:
	CreditCard(const CreditCard&) = delete;
	CreditCard& operator=(const CreditCard&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// CREATIONAL_PATTERNS_FACTORY_METHOD_ID_CARD_CREDITCARD_H_

// ˅

// ˄
