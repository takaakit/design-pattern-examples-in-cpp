// ˅
#include <string>
#include <iostream>
#include "structural_patterns/facade/HtmlWriter.h"

using namespace std;

// ˄

HtmlWriter::HtmlWriter(const string& file_name)
	// ˅
	
	// ˄
{
	// ˅
	writer.open(file_name);
	if (writer.fail() == true) {
		cerr << "file write error." << endl;
	}
	// ˄
}

HtmlWriter::~HtmlWriter()
{
	// ˅

	// ˄
}

void HtmlWriter::heading(const string& title)
{
	// ˅
	writer << "<html>";
	writer << "<head><title>" << title << "</title></head>";
	writer << "<body>" << endl;
	writer << "<h1>" << title << "</h1>" << endl;
	// ˄
}

void HtmlWriter::paragraph(const string& message)
{
	// ˅
	writer << "<p>" << message << "</p>" << endl;
	// ˄
}

void HtmlWriter::anchor(const string& url, const string& text)
{
	// ˅
	paragraph("<a href=\"" + url + "\">" + text + "</a>");
	// ˄
}

void HtmlWriter::mailto(const string& mail_address, const string& user_name)
{
	// ˅
	anchor("mailto:" + mail_address, user_name);
	// ˄
}

void HtmlWriter::close()
{
	// ˅
	writer << "</body>";
	writer << "</html>" << endl;
	writer.close();
	// ˄
}

// ˅

// ˄
