#include <iostream>
#include "creational_patterns/singleton/Singleton.h"

using namespace std;

// Check whether the same instance is obtained.

int main(int argc, char* argv[]) {
	Singleton* obj1 = Singleton::getInstance();
	Singleton* obj2 = Singleton::getInstance();
    if (obj1 == obj2) {
        cout << "obj1 and obj2 are the same instance." << endl;
    }
    else {
        cout << "obj1 and obj2 are different instances." << endl;
    }

	return 0;
}
