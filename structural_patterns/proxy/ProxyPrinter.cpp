// ˅
#include "structural_patterns/proxy/ProxyPrinter.h"
#include "structural_patterns/proxy/RealPrinter.h"

// ˄

ProxyPrinter::ProxyPrinter(const string& name)
	: current_name(name)
	, real(nullptr)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

ProxyPrinter::~ProxyPrinter()
{
	// ˅
	if (real != nullptr) {
		delete real;
	}
	// ˄
}

const string ProxyPrinter::getName() const
{
	// ˅
	if (real != nullptr) {
		return real->getName();
	}
	else {
		return current_name;
	}
	// ˄
}

void ProxyPrinter::changeName(const string& name)
{
	// ˅
	if (real != nullptr) {
		real->changeName(name);
	}
	
	current_name = name;
	// ˄
}

void ProxyPrinter::output(const string& content)
{
	// ˅
	// Check to see if the the RealPrinter had been created, create it if necessary.
	if (real == nullptr) {
		real = new RealPrinter(current_name);
	}
	
	real->output(content);
	// ˄
}

// ˅

// ˄
