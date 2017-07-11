//
// Created by Tom on 28/06/2017.
//

#include <iostream>
#include "Library.h"

void Library::addBook2Lib(Book const* bk) {
		books_container.push_back(bk);
}
void Library::printBooksInLib()const {
	if (books_container.empty())
	{
		std::cout << std::endl;
		std::cout << "I am sorry no books in Library! :(" << std::endl;
		std::cout << std::endl;

	} else {

		std::cout << "Books in Library: " << std::endl;
		for (size_t i = 0; i < books_container.size(); ++i) {
			books_container.at(i)->print();
		}
	}
}
void Library::borrow(unsigned int id)  {

	if (books_container.empty())
	{
		std::cout << "***** I am sorry no books in Library! :( ****" << std::endl;
	} else {

		user_books.reserve(1);
		user_books.push_back((const Book *&&) books_container.at(id));
		books_container.erase(books_container.begin()+id);
	}
}
void Library::printUserBooks() const
{
	if (user_books.empty())
	{
		std::cout << std::endl;
		std::cout << "***** User don't have any books *****" << std::endl;
		std::cout << std::endl;
	}else{

		user_books.at(0)->print();
	}
}

void Library::returnBook()
{	if (!books_container.empty()){

		books_container.push_back((const Book *&&) user_books.at(0));
		user_books.clear();
	} else {
		std::cout << std::endl;
		std::cout << "you don't have any books, go and rent one!" << std::endl;
		std::cout << std::endl;
	}
}