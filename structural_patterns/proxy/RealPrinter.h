// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_PROXY_REALPRINTER_H_
#define STRUCTURAL_PATTERNS_PROXY_REALPRINTER_H_

// ˅
#include <string>
#include "structural_patterns/proxy/Printer.h"

using namespace std;

// ˄

class RealPrinter : public Printer
{
	// ˅
	
	// ˄

private:

	string printer_name;

public:

	RealPrinter(const string& name);

	~RealPrinter();

	void setPrinterName(string name);

	// Display a content with the name
	void output(const string& content);

private:

	// Heavy task (Please think so...)
	void heavyTask(const string& message);

	// ˅
public:
	
protected:
	
private:
	RealPrinter(const RealPrinter&) = delete;
	RealPrinter& operator=(const RealPrinter&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_PROXY_REALPRINTER_H_

// ˅

// ˄
