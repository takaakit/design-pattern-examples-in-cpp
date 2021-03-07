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

void RealPrinter::setPrinterName(string name)
{
	// ˅
	printer_name = name;
	// ˄
}

void RealPrinter::output(const string& content)
{
	// ˅
	cout << "==========" << endl
		<< content << endl
		<< "Printed by " << printer_name << endl
		<< "==========" << endl;
	// ˄
}

void RealPrinter::heavyTask(const string& message) const
{
	// ˅
	cout << message;
	for (int i = 0; i < 10; ++i) {
#ifdef _MSC_VER
        Sleep(500);
#else
        usleep(0.5 * 1000000);
#endif
        
		cout << "." << flush;
	}
	cout << "Done." << endl;
	// ˄
}

// ˅

// ˄
