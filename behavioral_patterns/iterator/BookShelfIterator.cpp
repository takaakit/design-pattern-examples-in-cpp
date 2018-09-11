// ˅
#include "behavioral_patterns/iterator/Book.h"
#include "behavioral_patterns/iterator/BookShelf.h"
#include "behavioral_patterns/iterator/BookShelfIterator.h"

// ˄

BookShelfIterator::BookShelfIterator(BookShelf* book_shelf)
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

bool BookShelfIterator::hasNext()
{
	// ˅
	return index < book_shelf->number_of_books;
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
