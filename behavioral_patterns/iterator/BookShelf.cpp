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

Iterator* BookShelf::iterator() const
{
	// ˅
	return new BookShelfIterator(this);
	// ˄
}

Book* BookShelf::getAt(const int index) const
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

int BookShelf::getNumberOfBooks() const
{
	// ˅
	return number_of_books;
	// ˄
}

// ˅

// ˄
