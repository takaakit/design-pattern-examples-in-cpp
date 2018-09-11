#include <iostream>
#include <string>
#include <memory>
#include "creational_patterns/builder/Builder.h"
#include "creational_patterns/builder/PlainTextBuilder.h"
#include "creational_patterns/builder/HTMLBuilder.h"
#include "creational_patterns/builder/Director.h"

using namespace std;

// Create documents in HTML format and text format.

void showUsage() {
	cout << "Usage 1: builder.exe plain      <- Create a document in plain text." << endl;
	cout << "Usage 2: builder.exe html       <- Create a document in HTML." << endl;
}

int main(int argc, char* argv[]) {
	if (argc != 2) {
		showUsage();
	}
	else if (string(argv[1]) == "plain") {
		unique_ptr<PlainTextBuilder> plain_text_builder = unique_ptr<PlainTextBuilder>(new PlainTextBuilder());
		unique_ptr<Director> director = unique_ptr<Director>(new Director(plain_text_builder.get()));
		director->build();
		string content = plain_text_builder->result();
		cout << content << endl;
	}
	else if (string(argv[1]) == "html") {
		unique_ptr<HTMLBuilder> html_builder = unique_ptr<HTMLBuilder>(new HTMLBuilder());
		unique_ptr<Director> director = unique_ptr<Director>(new Director(html_builder.get()));
		director->build();
		string file_name = html_builder->result();
		cout << file_name << " has been created." << endl;
	}
	else {
		showUsage();
	}

	return 0;
}
