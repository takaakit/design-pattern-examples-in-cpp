#include <iostream>
#include "structural_patterns/facade/PageCreator.h"

using namespace std;

// Create a simple homepage.

int main(int argc, char* argv[]) {
	PageCreator::getInstance()->createSimpleHomepage("emily@example.com", "Homepage.html");

	return 0;
}
