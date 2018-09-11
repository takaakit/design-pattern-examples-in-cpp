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
		real->printer_name = value;
	}
	current_name = value;
	// ˄
}

void PrinterProxy::output(const string& content)
{
	// ˅
	createPrinter();
	if (real != nullptr) {
		real->output(content);
	}
	// ˄
}

void PrinterProxy::createPrinter()
{
	// ˅
	if (real == nullptr) {
		real.reset(new RealPrinter(current_name));
	}
	// ˄
}

// ˅

// ˄
