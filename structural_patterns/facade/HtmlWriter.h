// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_FACADE_HTMLWRITER_H_
#define STRUCTURAL_PATTERNS_FACADE_HTMLWRITER_H_

// ˅
#include <string>
#include <fstream>

using namespace std;

// ˄

class HtmlWriter
{
	// ˅
	
	// ˄

private:

	ofstream writer;

public:

	HtmlWriter(const string& file_name);

	~HtmlWriter();

	// Write a title
	void heading(const string& title);

	// Write a paragraph
	void paragraph(const string& message);

	// Write a mail address
	void mailto(const string& mail_address, const string& user_name);

	void close();

private:

	// Write a link
	void anchor(const string& url, const string& text);

	// ˅
public:
	
protected:
	
private:
	HtmlWriter(const HtmlWriter&) = delete;
	HtmlWriter& operator=(const HtmlWriter&) = delete;
	HtmlWriter(HtmlWriter&&) = delete;
	HtmlWriter& operator=(HtmlWriter&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_FACADE_HTMLWRITER_H_

// ˅

// ˄
