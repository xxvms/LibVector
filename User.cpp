//
// Created by Tom on 06/07/2017.
//

#include <iostream>
#include "User.h"

User::User(): books_user_have(){}//{" ", " ", 0;}

void User::printU()const {

	if (books_user_have.empty()){
		std::cout << std::endl;
		std::cout << "you don't have any books!" << std::endl;
		std::cout << std::endl;
	}else{
		std::cout << std::endl;
		std::cout << "I have following book: " << std::endl;
		books_user_have.at(0)->print();
	}
}
void User::borrowU(Book const * book) {

	if (!books_user_have.empty() ){
		std::cout << "please return your book before renting new one" << std::endl;
		books_user_have.at(0)->print();
	} else{
		books_user_have.push_back(book);
	}
}
Book const * User::returnU() {

	return books_user_have.at(0);
}