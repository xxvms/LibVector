//
// Created by Tom on 06/07/2017.
//

#include <iostream>
#include "User.h"

void User::printU()const {

	std::cout << "User book: " << std::endl;
	 user_books->print();
}
void User::borrowU(Book const * book) {
	user_books = book;
}
void User::returnU() {

}