// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_ITERATOR_BOOKSHELFITERATOR_H_
#define BEHAVIORAL_PATTERNS_ITERATOR_BOOKSHELFITERATOR_H_

// ˅
#include "behavioral_patterns/iterator/Iterator.h"

class BookShelf;

// ˄

class BookShelfIterator : public Iterator
{
	// ˅
	
	// ˄

private:

	int index;

	BookShelf* book_shelf;

public:

	BookShelfIterator(BookShelf* book_shelf);

	~BookShelfIterator();

	bool hasNext();

	void* next();

	// ˅
public:
	
protected:
	
private:
	BookShelfIterator(const BookShelfIterator&) = delete;
	BookShelfIterator& operator=(const BookShelfIterator&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_ITERATOR_BOOKSHELFITERATOR_H_

// ˅

// ˄
