// ˅
#include <iostream>
#include "creational_patterns/factory_method/credit_card/CreditCard.h"

using namespace std;

// ˄

CreditCard::CreditCard(const string& owner)
	: owner(owner)
	// ˅
	
	// ˄
{
	// ˅
	cout << "Make " << owner << "'s card." << endl;
	// ˄
}

CreditCard::~CreditCard()
{
	// ˅
	
	// ˄
}

void CreditCard::use() const
{
	// ˅
	cout << "Use " << owner << "'s card." << endl;
	// ˄
}

// ˅

// ˄
