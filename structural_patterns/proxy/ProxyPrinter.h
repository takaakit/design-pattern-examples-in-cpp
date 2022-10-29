// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_PROXY_PROXYPRINTER_H_
#define STRUCTURAL_PATTERNS_PROXY_PROXYPRINTER_H_

// ˅
#include <string>
#include <memory>
#include "structural_patterns/proxy/Printer.h"

class RealPrinter;

using namespace std;

// ˄

// ProxyPrinter forwards requests to RealPrinter when appropriate.
class ProxyPrinter : public Printer
{
	// ˅
	
	// ˄

private:

	string current_name;

	// A printer that actually prints
	RealPrinter* real;

public:

	ProxyPrinter(const string& name);

	~ProxyPrinter();

	const string getName() const;

	void changeName(const string& name);

	void output(const string& content);

	// ˅
public:
	
protected:
	
private:
	ProxyPrinter(const ProxyPrinter&) = delete;
	ProxyPrinter& operator=(const ProxyPrinter&) = delete;
	ProxyPrinter(ProxyPrinter&&) = delete;
	ProxyPrinter& operator=(ProxyPrinter&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_PROXY_PROXYPRINTER_H_

// ˅

// ˄
