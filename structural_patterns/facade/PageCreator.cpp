// ˅
#include <string>
#include <fstream>
#include <iostream>
#include <regex>
#include "structural_patterns/facade/DataLibrary.h"
#include "structural_patterns/facade/HtmlWriter.h"
#include "structural_patterns/facade/PageCreator.h"

#ifdef _MSC_VER
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

// ˄

PageCreator* PageCreator::instance = nullptr;

PageCreator* PageCreator::getInstance()
{
	// ˅
	if (instance == nullptr) {
		instance = new PageCreator();
	}
	return instance;
	// ˄
}

PageCreator::PageCreator()
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

PageCreator::~PageCreator()
{
	// ˅
	
	// ˄
}

void PageCreator::createSimpleHomepage(const string& mail_address, const string& html_file_name)
{
	// ˅
	// Get the current directory path
	char current_directory_path[255];
#ifdef _MSC_VER
	GetCurrentDirectory(255, current_directory_path);
#else
	getcwd(current_directory_path, 255);
#endif

	map<string, string> address_book = DataLibrary::getInstance()->getProperties(string(current_directory_path) + "/addressbook.txt");
	const string user_name = address_book[mail_address];
	HtmlWriter writer(html_file_name);
	writer.heading(user_name + "'s homepage");
	writer.paragraph("Welcome to " + user_name + "'s homepage.");
	writer.paragraph("Please email me at this address.");
	writer.mailto(mail_address, user_name);
	writer.close();
	cout << html_file_name << " is created for " << mail_address << " (" << user_name << ")" << endl;
	cout << "Output file: " << current_directory_path << "/" << html_file_name << endl;
	// ˄
}

// ˅

// ˄
