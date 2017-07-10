//
// Created by Tom on 28/06/2017.
//

#include <iostream>
#include "Library.h"

void Library::addBook2Lib(Book const* bk) {

	books_container.push_back(bk);
}
void Library::printBooksInLib()const {

	std::cout << "Books in Library: " << std::endl;
	for (size_t i = 0; i < books_container.size(); ++i) {
		books_container.at(i)->print();
	}
}
void Library::borrow(unsigned int id)  {

	user_books->borrowU(books_container.at(id));
	books_container.erase(books_container.begin()+id);
}
void Library::printUserBooks() const
{
	user_books->printU();
}

void Library::returnBook()
{
	books_container.push_back(user_books->returnU());
	user_books = nullptr;
}