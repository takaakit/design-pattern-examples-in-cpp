#include <string>
#include <iostream>
#include <memory>
#include "structural_patterns/flyweight/LargeSizeCharFactory.h"
#include "structural_patterns/flyweight/LargeSizeString.h"

using namespace std;

// First, create instances for displaying large size characters, then display large size character string using that instances.

int main(int argc, char* argv[]) {
	if (argc != 2) {
		cout << "Usage: flyweight.exe digits" << endl;
		cout << "Ex.  : flyweight.exe 1212123" << endl;
	}
	else {
		unique_ptr<LargeSizeString> lss = unique_ptr<LargeSizeString>(new LargeSizeString(argv[1]));
		lss->display();
	}

	return 0;
}
