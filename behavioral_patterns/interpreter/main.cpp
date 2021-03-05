#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>
#include <memory>
#include "behavioral_patterns/interpreter/Context.h"
#include "behavioral_patterns/interpreter/Node.h"
#include "behavioral_patterns/interpreter/Program.h"

#ifdef _MSC_VER
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

/*
An interpreter for mini language to operate radio controlled car. It parses the following syntax composed of "forward", "left", "right", and "repeat" commands:
```
<program>      ::= program <command list>
<command list> ::= <command>* end
<command>      ::= <repeat> | <action>
<repeat>       ::= repeat <number> <command list>
<action>       ::= forward | right | left
<number>       ::= 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
```
___
Examples before and after syntax analysis.

Ex.1
```
Before parsing : program end
After parsing  : [program []]
```

Ex.2
```
Before parsing : program forward right left end
After parsing  : [program [forward, right, left]]
```

Ex.3
```
Before parsing : program repeat 4 forward right end end
After parsing  : [program [repeat 4 [forward, right]]]
```
*/

int main() {
	// Get the current directory path.
	char current_directory_path[255];
#ifdef _MSC_VER
	GetCurrentDirectory(255, current_directory_path);
#else
	getcwd(current_directory_path, 255);
#endif
	
	string line;
	const string file_path = string(current_directory_path) + "/program.txt";
	ifstream ifs(file_path);
	if (ifs.fail() == false) {
		while (getline(ifs, line)) {
			cout << "Before parsing : " << line << endl;
			unique_ptr<Node> node(new Program());
			unique_ptr<Context> context(new Context(line));
			node->parse(context.get());
			cout << "After parsing  : " << node->toString() << endl;
		}
	}
	else {
		cerr << "Failed to read file: " << file_path << endl;
	}

	return 0;
}
