#include <iostream>
#include <memory>
#include "structural_patterns/proxy/PrinterProxy.h"

using namespace std;

// At the time of printing, create an instance of the printer for the first time.
// In order to spend time creating a printer, call a heavy task when creating a printer instance.

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
