// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_ITERATOR_BOOK_H_
#define BEHAVIORAL_PATTERNS_ITERATOR_BOOK_H_

// ˅
#include <string>

using namespace std;

// ˄

class Book
{
	// ˅
	
	// ˄

public:

	const string title;

	Book(const string& title);

	~Book();

	// ˅
public:
	
protected:
	
private:
	Book(const Book&) = delete;
	Book& operator=(const Book&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_ITERATOR_BOOK_H_

// ˅

// ˄
