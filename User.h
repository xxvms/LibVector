//
// Created by Tom on 06/07/2017.
//

#ifndef LIBVECTOR_USER_H
#define LIBVECTOR_USER_H
#include <string>
#include <vector>
#include "Book.h"

class User {
private:
	Book const* user_books;

public:
	void printU()const;
	void borrowU(Book const* book);
	void returnU();

};



#endif //LIBVECTOR_USER_H
