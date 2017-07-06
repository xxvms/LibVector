//
// Created by Tom on 28/06/2017.
//

#include <iostream>
#include "Library.h"
#include "User.h"

void Library::addBook2Lib(Book* bk) {

	books_container.push_back(bk);
}
void Library::printBooksInLib() {

	std::cout << "Books in Library: " << std::endl;
	for (size_t i = 0; i < books_container.size(); ++i) {
		books_container.at(i)->print();
	}
}
void Library::borrow(unsigned int id) {

	//books_container[id];
	books_container.at(id)->borrow();
}