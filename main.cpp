#include <iostream>
#include <vector>
#include "Book.h"
#include "Library.h"
#include "User.h"
char menu();

int main() {
	Library library;
	std::vector<Book>book;

	do {
		switch (menu())
		{
			case '1':
			{
				std::cout << "Max amount books in Library: ";
				unsigned int librarySize = 0;
				std::cin >> librarySize;
				book.resize(librarySize);
				std::cout << std::endl;
				std::cout << "Library capacity is " << book.capacity() << " books"<< std::endl;
				std::cout << std::endl;
				break;
			}
			case '2':
			{
				int howManyBooks = 0;
				std::cout << "How many books do you want to add:";
				std::cin >> howManyBooks;
				for (size_t i = 0; i < howManyBooks; ++i) {
					book.at(i).add();
					library.addBook2Lib(&book.at(i));
				}
				break;
			}
			case '3': {
				library.printBooksInLib();
				std::cout << "Please type book ID of book you with to borrow: " << std::endl;
				unsigned int bookID{0};
				std::cin >> bookID;
				library.borrow(bookID-1); // -1 is offset for correct index

				break;
			}
			case '4':
				std::cout << "Unfinished return book" << std::endl;
				break;

			case '5':
				std::cout << "Print all books in library";
				library.printBooksInLib();
				break;
			case '6':
				std::cout << "User books: " << std::endl;
				library.printUserBooks();
				break;
			default:
				std::cout << "smile its friday";
				break;
		}
	}while (menu()!= '9');

	return 0;
}

char menu() {
	char choice{' '};

	std::cout << "Please make your selection" << std::endl;
	std::cout << "Press number: " << std::endl;
	std::cout << "1 - Set size of the Library" << std::endl;
	std::cout << "2 - Create book" << std::endl;
	std::cout << "3 - Borrow book" << std::endl;
	std::cout << "4 - Return book" << std::endl; // todo create function that user can return book - user can list books he/she have
	std::cout << "5 - Print out all books" << std::endl;
	std::cout << "6 - Print books borrowed by user" << std::endl;
	std::cout << "9 - to Quit" << std::endl;
	std::cin >> choice;
	return choice;

}
