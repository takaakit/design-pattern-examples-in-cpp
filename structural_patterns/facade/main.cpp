#include <iostream>
#include "structural_patterns/facade/PageCreator.h"

using namespace std;

/*
Create a simple homepage through a Facade("PageCreator"). The Facade gets info from the "DataLibrary" and uses the info to create an HTML file.
 */

int main(int argc, char* argv[]) {
	PageCreator::getInstance()->createSimpleHomepage("emily@example.com", "Homepage.html");

	return 0;
}
