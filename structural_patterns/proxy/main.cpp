#include <iostream>
#include <memory>
#include "structural_patterns/proxy/PrinterProxy.h"

using namespace std;

/*
Print on a named printer. Setting and changing the printer name is done by Proxy (PrinterProxy).
At the time of printing, create an instance of the RealSubject (RealPrinter) for the first time.
 */

int main(int argc, char* argv[]) {
    unique_ptr<PrinterProxy> p(new PrinterProxy("PRINTER-A"));
    cout << "The current printer is " << p->getPrinterName() << "." << endl;
    p->setPrinterName("PRINTER-B");
    cout << "The current printer is " << p->getPrinterName() << "." << endl;

    cout << "Print start." << endl;
    p->output("Nice to meet you.");
    cout << "Print exit." << endl;

	return 0;
}
