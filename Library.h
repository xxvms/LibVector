//
// Created by Tom on 28/06/2017.
//

#ifndef LIBVECTOR_LIBRARY_H
#define LIBVECTOR_LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"
#include "User.h"

class Library {
private:
	std::vector<Book const*> books_container;
	User* user_books;

public:
	void addBook2Lib(Book const* bk);
	void printBooksInLib()const;
	void borrow(unsigned int id);
	void printUserBooks() const;

};


#endif //LIBVECTOR_LIBRARY_H
