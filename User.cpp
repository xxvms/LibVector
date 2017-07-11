//
// Created by Tom on 06/07/2017.
//

#include <iostream>
#include "User.h"

User::User(): user_books(){" ", " ", 0;}

void User::printU()const {

	if (user_books.empty()){
		std::cout << std::endl;
		std::cout << "you don't have any books!" << std::endl;
		std::cout << std::endl;
	}else{
		std::cout << std::endl;
		std::cout << "I have following book: " << std::endl;
		user_books.at(0)->print();
	}
}
void User::borrowU(Book const * book) {
	if (!user_books.empty() ){
		std::cout << "please return your book before renting new one" << std::endl;
		user_books.at(0)->print();
	} else{
		user_books.push_back(book);
	}
}
Book const * User::returnU() {

	return user_books.at(0);
}