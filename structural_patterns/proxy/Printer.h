// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_PROXY_PRINTER_H_
#define STRUCTURAL_PATTERNS_PROXY_PRINTER_H_

// ˅
#include <string>

using namespace std;

// ˄

class Printer
{
	// ˅
	
	// ˄

public:

	virtual ~Printer();

	virtual void output(const string& content) = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_PROXY_PRINTER_H_

// ˅

// ˄
