// ˅
#include "structural_patterns/proxy/PrinterProxy.h"
#include "structural_patterns/proxy/RealPrinter.h"

// ˄

PrinterProxy::PrinterProxy(const string& name)
	: current_name(name)
	, real(nullptr)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

PrinterProxy::~PrinterProxy()
{
	// ˅
	if (real != nullptr) {
		delete real;
	}
	// ˄
}

string PrinterProxy::getPrinterName()
{
	// ˅
	return current_name;
	// ˄
}

void PrinterProxy::setPrinterName(const string& value)
{
	// ˅
	if (real != nullptr) {
		real->setPrinterName(value);
	}
	current_name = value;
	// ˄
}

void PrinterProxy::output(const string& content)
{
	// ˅
	if (real == nullptr) {
		real = new RealPrinter(current_name);
	}
	real->output(content);
	// ˄
}

// ˅

// ˄
