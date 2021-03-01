#include <string>
#include <iostream>
#include <memory>
#include "structural_patterns/flyweight/LargeSizeCharFactory.h"
#include "structural_patterns/flyweight/LargeSizeString.h"

using namespace std;

// First, create instances for displaying large size characters, then display large size character string using that instances.

int main(int argc, char* argv[]) {
	cout << "Please enter digits (ex. 1212123):" << endl;
	string input_value = "";
	cin >> input_value;

	unique_ptr<LargeSizeString> lss(new LargeSizeString(input_value));
	lss->display();

	return 0;
}
