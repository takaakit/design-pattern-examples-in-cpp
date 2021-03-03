#include <iostream>
#include <memory>
#include "structural_patterns/adapter/PrintMessageDisplay.h"

using namespace std;

/*
Display the given string as follows
```
-- Nice to meet you --
```
or display it as follows.
```
[[ Nice to meet you ]]
```
 */

int main(int argc, char* argv[]) {
	unique_ptr<Print> print(new PrintMessageDisplay("Nice to meet you"));
	print->printWeak();
	print->printStrong();

	return 0;
}
