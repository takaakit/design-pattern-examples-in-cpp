// ˅
#include "behavioral_patterns/iterator/Book.h"
#include "behavioral_patterns/iterator/BookShelf.h"
#include "behavioral_patterns/iterator/Iterator.h"
#include "behavioral_patterns/iterator/BookShelfIterator.h"

// ˄

BookShelf::BookShelf(const int max_size)
	: number_of_books(0)
	, books(max_size)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

BookShelf::~BookShelf()
{
	// ˅
	
	// ˄
}

shared_ptr<Iterator> BookShelf::iterator()
{
	// ˅
	return shared_ptr<Iterator>(new BookShelfIterator(this));
	// ˄
}

Book* BookShelf::getAt(const int index)
{
	// ˅
	return books.at(index);
	// ˄
}

void BookShelf::add(Book* book)
{
	// ˅
	books.insert(books.begin() + number_of_books, book);
	++number_of_books;
	// ˄
}

// ˅

// ˄
