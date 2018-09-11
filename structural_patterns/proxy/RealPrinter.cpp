// ˅
#include <iostream>
#include "structural_patterns/proxy/RealPrinter.h"

#ifdef _MSC_VER
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

// ˄

RealPrinter::RealPrinter(const string& name)
	: printer_name(name)
	// ˅
	
	// ˄
{
	// ˅
	heavyTask("Creating an instance(" + name + ") of the Printer");
	// ˄
}

RealPrinter::~RealPrinter()
{
	// ˅
	
	// ˄
}

void RealPrinter::output(const string& content)
{
	// ˅
	cout << "=== " << printer_name << " ===" << endl;
	cout << content << endl;
	// ˄
}

void RealPrinter::heavyTask(const string& message)
{
	// ˅
	cout << message;
	for (int i = 0; i < 10; ++i) {
#ifdef _MSC_VER
        Sleep(500);
#else
        usleep(0.5 * 1000000);
#endif
        
		cout << ".";
	}
	cout << "Done." << endl;
	// ˄
}

// ˅

// ˄
