#include <iostream>
#include <string>
#include <memory>
#include "creational_patterns/builder/Builder.h"
#include "creational_patterns/builder/PlainTextBuilder.h"
#include "creational_patterns/builder/HTMLBuilder.h"
#include "creational_patterns/builder/Director.h"

#ifdef _MSC_VER
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

/*
Create documents in HTML format and text format. It is possible to create different documents
in the same construction process.
 */

int main(int argc, char* argv[]) {
	cout << "Please enter \"plain\" or \"html\":" << endl;
	string input_value = "";
	cin >> input_value;

	if (input_value == "plain") {
		unique_ptr<PlainTextBuilder> plain_text_builder(new PlainTextBuilder());
		unique_ptr<Director> director(new Director(plain_text_builder.get()));
		director->build();
		string content = plain_text_builder->getContent();
		cout << content << endl;
	}
	else if (input_value == "html") {
		unique_ptr<HTMLBuilder> html_builder(new HTMLBuilder());
		unique_ptr<Director> director(new Director(html_builder.get()));
		director->build();
		string file_name = html_builder->getFileName();
		cout << file_name << " has been created." << endl;

		// Get the current directory path
		char current_directory_path[255];
#ifdef _MSC_VER
		GetCurrentDirectory(255, current_directory_path);
#else
		getcwd(current_directory_path, 255);
#endif

		cout << "Output file: " << current_directory_path << "/" << file_name << endl;
	}
	else {
		cerr << "The value is not \"plain\" or \"html\"." << endl;
		exit(1);
	}

	return 0;
}
