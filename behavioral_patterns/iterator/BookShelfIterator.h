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

	const BookShelf* book_shelf;

public:

	BookShelfIterator(const BookShelf* book_shelf);

	~BookShelfIterator();

	bool hasNext() const;

	void* next();

	// ˅
public:
	
protected:
	
private:
	BookShelfIterator(const BookShelfIterator&) = delete;
	BookShelfIterator& operator=(const BookShelfIterator&) = delete;
	BookShelfIterator(BookShelfIterator&&) = delete;
	BookShelfIterator& operator=(BookShelfIterator&&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_ITERATOR_BOOKSHELFITERATOR_H_

// ˅

// ˄
