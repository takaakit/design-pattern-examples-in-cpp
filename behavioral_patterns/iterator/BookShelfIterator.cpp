// ˅
#include "behavioral_patterns/iterator/Book.h"
#include "behavioral_patterns/iterator/BookShelf.h"
#include "behavioral_patterns/iterator/BookShelfIterator.h"

// ˄

BookShelfIterator::BookShelfIterator(const BookShelf* book_shelf)
	: index(0)
	, book_shelf(book_shelf)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

BookShelfIterator::~BookShelfIterator()
{
	// ˅
	
	// ˄
}

bool BookShelfIterator::hasNext() const
{
	// ˅
	return index < book_shelf->getNumberOfBooks();
	// ˄
}

void* BookShelfIterator::next()
{
	// ˅
	Book* book = book_shelf->getAt(index);
	++index;
	return book;
	// ˄
}

// ˅

// ˄
