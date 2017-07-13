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
	std::vector<Book const*> books_user_have;
public:
	User();
	void printU()const;
	void borrowU(Book const* book);
	Book const* returnU();

};


class Librarian : public User {
	std::vector<Book const*> books_Librarian_have;

public:
	Librarian();
	void printL()const;
	void borrowL(Book const* book);
	Book const* returnL();

};


#endif //LIBVECTOR_USER_H
