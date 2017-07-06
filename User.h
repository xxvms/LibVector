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
	Book* user_books;

public:
	void printU();
	void borrowU(int id);
	void returnU();

};



#endif //LIBVECTOR_USER_H
