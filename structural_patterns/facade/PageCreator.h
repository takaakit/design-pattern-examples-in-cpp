// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_FACADE_PAGECREATOR_H_
#define STRUCTURAL_PATTERNS_FACADE_PAGECREATOR_H_

// ˅
#include <string>

using namespace std;

// ˄

class PageCreator
{
	// ˅
	
	// ˄

private:

	static PageCreator* instance;

public:

	static PageCreator* getInstance();

private:

	PageCreator();

	~PageCreator();

public:

	void createSimpleHomepage(const string& mail_address, const string& html_file_name);

	// ˅
public:
	
protected:
	
private:
	PageCreator(const PageCreator&) = delete;
	PageCreator& operator=(const PageCreator&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_FACADE_PAGECREATOR_H_

// ˅

// ˄
