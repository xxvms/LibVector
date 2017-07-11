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

		/*user_books.resize(1);
		std::cout << "size: ";
		user_books.size();*/
		user_books.at(0)->borrowU(books_container.at(id));
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

		user_books.at(0)->printU();
	}
}

void Library::returnBook()
{
	books_container.push_back(user_books.at(0)->returnU());
	user_books.at(0) = nullptr;
}