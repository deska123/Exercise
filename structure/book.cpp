#include<iostream>

/** 
 * This single .exe program functionates to implement structure feature in C++
 * by creating simple book object from a book struct
 *
 * @author Dennis Pratama Kamah 
 * @version 2017.06.24
**/

struct Book
{
	char id[10];
	char bookName[100];
	char yearPublished[4];
	char author[100];
	int price;
};

main()
{
	Book book;
	std::cout << "Input book ID (10 characters) : ";
	std::cin >> book.id;
	std::cout << "Input book name : ";
	std::cin >> book.bookName;
	std::cout << "Input year the book published : ";
	std::cin >> book.yearPublished;
	std::cout << "Input name of book's author : ";
	std::cin >> book.author;
	std::cout << "Input price of the book : ";
	std::cin >> book.price;
	
	std::cout << "\n";
	
	std::cout << "Book ID : " << book.id << "\n";
	std::cout << "Book Name : " << book.bookName << "\n"; 
	std::cout << "Year published : " << book.yearPublished << "\n"; 
	std::cout << "Book's Author' : " << book.author << "\n"; 
	std::cout << "Book Price : " << book.price << "\n"; 
}
