// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_ITERATOR_BOOKSHELF_H_
#define BEHAVIORAL_PATTERNS_ITERATOR_BOOKSHELF_H_

// ˅
#include <vector>
#include <memory>
#include "behavioral_patterns/iterator/Aggregate.h"

class Book;
class Iterator;

using namespace std;

// ˄

class BookShelf : public Aggregate
{
	// ˅
	
	// ˄

private:

	int number_of_books;

	vector<Book*> books;

public:

	BookShelf(const int max_size);

	~BookShelf();

	Iterator* iterator();

	Book* getAt(const int index);

	void add(Book* book);

	int getNumberOfBooks();

	// ˅
public:
	
protected:
	
private:
	BookShelf(const BookShelf&) = delete;
	BookShelf& operator=(const BookShelf&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_ITERATOR_BOOKSHELF_H_

// ˅

// ˄
