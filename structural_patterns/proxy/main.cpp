#include <iostream>
#include <memory>
#include "structural_patterns/proxy/PrinterProxy.h"

using namespace std;

// At the time of printing, create an instance of the printer for the first time.
// In order to spend time creating a printer, call a heavy task when creating a printer instance.

int main(int argc, char* argv[]) {
    unique_ptr<PrinterProxy> printer_proxy = unique_ptr<PrinterProxy>(new PrinterProxy("Emily's printer"));
    cout << "The current printer is " << printer_proxy->getPrinterName() << "." << endl;
    printer_proxy->setPrinterName("William's printer");
    cout << "The current printer is " << printer_proxy->getPrinterName() << "." << endl;
    printer_proxy->output("Nice to meet you.");

	return 0;
}
