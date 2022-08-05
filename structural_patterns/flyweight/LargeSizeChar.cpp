// ˅
#include <string>
#include <iostream>
#include <fstream>
#include <regex>
#include <sstream>
#include "structural_patterns/flyweight/LargeSizeChar.h"

#ifdef _MSC_VER
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

// ˄

LargeSizeChar::LargeSizeChar(const char char_name)
	: display_data("")
	// ˅
	
	// ˄
{
	// ˅
	// Get the current directory path.
	char current_directory_path[255];
#ifdef _MSC_VER
	GetCurrentDirectory(255, current_directory_path);
#else
	getcwd(current_directory_path, 255);
#endif

	ifstream ifs(string(current_directory_path) + "/big" + char_name + ".txt");
	if (ifs.is_open()) {
		string line;
		while (getline(ifs, line)) {
			display_data  += line + "\n";
		}
	}
	else {
		display_data = string(1, char_name) + "?";
	}
	// ˄
}

LargeSizeChar::~LargeSizeChar()
{
	// ˅
	
	// ˄
}

void LargeSizeChar::display() const
{
	// ˅
	cout << display_data << endl;
	// ˄
}

// ˅

// ˄
