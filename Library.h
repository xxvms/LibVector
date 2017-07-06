//
// Created by Tom on 28/06/2017.
//

#ifndef LIBVECTOR_LIBRARY_H
#define LIBVECTOR_LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"

class Library {
private:
	std::vector<Book*> books_container;

public:
	void addBook2Lib(Book* bk);
	void printBooksInLib();
	void borrow(unsigned int id);

};


#endif //LIBVECTOR_LIBRARY_H
