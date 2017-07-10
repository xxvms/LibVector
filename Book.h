//
// Created by Tom on 28/06/2017.
//

#ifndef LIBVECTOR_BOOK_H
#define LIBVECTOR_BOOK_H

#include <string>
#include <vector>

class Book {

protected:
	static int counter;
	int ID;
	std::string author;
	std::string title;
	int publicationYear;
public:
	Book();
	int getID() { return ID; }
	int add();
	int static counterNumber() { return counter; }
	void print() const;
};


#endif //LIBVECTOR_BOOK_H
