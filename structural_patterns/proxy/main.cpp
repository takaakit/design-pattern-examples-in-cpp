#include <iostream>
#include <memory>
#include "structural_patterns/proxy/ProxyPrinter.h"

using namespace std;

/*
Print on a named printer. Setting and changing the printer name is done by Proxy (ProxyPrinter).
At the time of printing, create an instance of the RealSubject (RealPrinter) for the first time.
 */

int main(int argc, char* argv[]) {
	unique_ptr<ProxyPrinter> p(new ProxyPrinter("PRINTER-A"));
	cout << "The current printer is " << p->getName() << "." << endl;
	p->changeName("PRINTER-B");
	cout << "The current printer is " << p->getName() << "." << endl;

	cout << "Print start." << endl;
	p->output("Nice to meet you.");
	cout << "Print exit." << endl;

	return 0;
}
