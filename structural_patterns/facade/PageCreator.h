// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_FACADE_PAGECREATOR_H_
#define STRUCTURAL_PATTERNS_FACADE_PAGECREATOR_H_

// ˅
#include <string>

using namespace std;

// ˄

// Singleton ( based on the example code on Wikipedia )
//   https://en.wikipedia.org/w/index.php?title=Singleton_pattern&oldid=1115882454#C++
//   Note: The latest Wikipedia page has had the C++ code example removed. This link is to the page before it was removed.
class PageCreator
{
	// ˅
	
	// ˄

public:

	static PageCreator* getInstance();

private:

	PageCreator();

public:

	~PageCreator();

	void createSimpleHomepage(const string& mail_address, const string& html_file_name);

	// ˅
public:
	
protected:
	
private:
	PageCreator(const PageCreator&) = delete;
	PageCreator& operator=(const PageCreator&) = delete;
	PageCreator(PageCreator&&) = delete;
	PageCreator& operator=(PageCreator&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_FACADE_PAGECREATOR_H_

// ˅

// ˄
