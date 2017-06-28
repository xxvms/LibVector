//
// Created by Tom on 28/06/2017.
//

#include <iostream>
#include "Book.h"

int Book::counter = 0;

Book::Book() : author("n/a"), title("n/a"), publicationYear(0)
{
	counter++;
	ID = counter;
}
int Book::addBook()
{
	std::cout << "Book ID:" << ID << std::endl;
	std::cout << "Title: ";
	std::cin >> title;
	std::cout << "Author: ";
	std::cin >> author;
	std::cout << "Publication year: ";
	std::cin >> publicationYear;
	return ID;
}