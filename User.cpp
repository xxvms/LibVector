//
// Created by Tom on 06/07/2017.
//

#include <iostream>
#include "User.h"

void User::printU() {

	std::cout << "User book: " << std::endl;
	 user_books->print();
}
void User::borrowU(int id) {
	user_books[id];
	user_books->borrow();
}
void User::returnU() {

}