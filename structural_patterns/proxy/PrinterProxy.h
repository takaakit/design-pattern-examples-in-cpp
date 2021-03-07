// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_PROXY_PRINTERPROXY_H_
#define STRUCTURAL_PATTERNS_PROXY_PRINTERPROXY_H_

// ˅
#include <string>
#include <memory>
#include "structural_patterns/proxy/Printer.h"

class RealPrinter;

using namespace std;

// ˄

class PrinterProxy : public Printer
{
	// ˅
	
	// ˄

private:

	string current_name;

	// A printer that actually prints
	RealPrinter* real;

public:

	PrinterProxy(const string& name);

	~PrinterProxy();

	const string getPrinterName() const;

	void setPrinterName(const string& value);

	void output(const string& content);

	// ˅
public:
	
protected:
	
private:
	PrinterProxy(const PrinterProxy&) = delete;
	PrinterProxy& operator=(const PrinterProxy&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_PROXY_PRINTERPROXY_H_

// ˅

// ˄
