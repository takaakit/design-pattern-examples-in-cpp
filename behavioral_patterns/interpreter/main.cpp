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
Analyze the syntax of the mini-language composed of "forward", "left", "right", and "repeat" commands.

-----
Examples before and after syntax analysis.
* Ex.1
Before : "program end"
After  : [program []]

* Ex.2
Before : "program forward right left end"
After  : [program [forward, right, left]]

* Ex.3
Before : "program repeat 4 forward right end end"
After  : [program [[repeat 4 [forward, right]]]]
*/

int main() {
	// Extract the current directory path.
	char current_directory_path[255];
#ifdef _MSC_VER
	GetCurrentDirectory(255, current_directory_path);
#else
	getcwd(current_directory_path, 255);
#endif
	
	stringstream buf;
	string line;
	ifstream ifs(string(current_directory_path) + "/program.txt");
	if (ifs.fail() == false) {
		while (getline(ifs, line)) {
			cout << "TEXT > \"" << line << "\"" << endl;
			unique_ptr<Node> node = unique_ptr<Node>(new Program());
			unique_ptr<Context> context = unique_ptr<Context>(new Context(line));
			node->parse(context.get());
			cout << "NODE > " << node->toString() << endl;
		}
	}
	else {
		cerr << "file read error." << endl;
	}

	return 0;
}
