#include <iostream>
#include "behavioral_patterns/iterator/BookShelf.h"
#include "behavioral_patterns/iterator/Book.h"
#include "behavioral_patterns/iterator/Iterator.h"

using namespace std;

/*
Add books in a bookshelf and display the names of the book in turn.
 */

int main() {
	unique_ptr<BookShelf> book_shelf(new BookShelf(5));
	unique_ptr<Book> book1(new Book("Design Patterns: Elements of Reusable Object-Oriented Softwares"));
	book_shelf->add(book1.get());
	unique_ptr<Book> book2(new Book("The Object Primer: Agile Model-Driven Development with UML 2.0"));
	book_shelf->add(book2.get());
	unique_ptr<Book> book3(new Book("Software Systems Architecture: Working With Stakeholders Using Viewpoints and Perspectives"));
	book_shelf->add(book3.get());
	unique_ptr<Book> book4(new Book("A Practical Guide to SysML: The Systems Modeling Language"));
	book_shelf->add(book4.get());
	unique_ptr<Book> book5(new Book("A Pattern Language: Towns, Buildings, Construction"));
	book_shelf->add(book5.get());

	shared_ptr<Iterator> it(book_shelf->iterator());
	while (it->hasNext() == true) {
		Book* book = static_cast<Book*>(it->next());
		cout << book->title << endl;
	}

	return 0;
}
