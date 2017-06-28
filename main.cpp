#include <iostream>
#include <vector>
#include "Book.h"


char menu();



int main() {
	std::vector<Book>book;		// container for creating books
	//char choice;
	int maxSizeLibrary;

	do {
		//choice = menu();
		switch (menu())
		{
			case '1':
				std::cout << "How many books will fit in the library: ";
				std::cin >> maxSizeLibrary;
				book.reserve(maxSizeLibrary);
				// todo add library object
				break;
			case '2':
				int howManyBooks{0};
				std::cout << "How many books do you want to add:";
				std::cin >> howManyBooks;
				for (int i = 0; i < howManyBooks; i++) {

					book.push_back()
				}
		}
	}




	return 0;
}

char menu() {
	char choice;

	std::cout << "Please make your selection" << std::endl;
	std::cout << "Press number: " << std::endl;
	std::cout << "1 - Set how many books can fit in to the library" << std::endl;
	std::cout << "2 - Add books to library" << std::endl;
	std::cout << "3 - Borrow book" << std::endl;
	std::cout << "4 - Return book" << std::endl; // todo create function that user can return book - user can list books he/she have
	std::cout << "5 - Print out all books" << std::endl;
	std::cout << "6 - Print books borrowed by user" << std::endl;
	std::cout << "9 - to Quit" << std::endl;
	std::cin >> choice;
	return choice;

}