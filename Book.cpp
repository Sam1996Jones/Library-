#include "Book.h"

/*
Prints details of book
*/
void Book::printDetails() {
	cout << "\nName: " << name << endl
		<< "Year: " << year << endl
		<< "Author: " << author << endl
		<< "Publisher: " << publisher << endl
		<< "Edition: " << edition << endl;
	cout << "There is: " << (MaxCopies - borrowed) << " copies left!" << endl;
}

/*
Constructor
*/
Book::Book(string _author, string _publisher, string _edition, string _name, string _year, int NumCopies)
{ 
	author = _author; publisher = _publisher; edition = _edition; name = _name; year = _year; MaxCopies = NumCopies; 
}

/*
Constructor, enter data during runtime
*/
Book::Book()
{
	cout << "Enter author: " << endl;
	getline(cin, author);
	cout << "Enter publisher: " << endl;
	getline(cin, publisher);
	cout << "Enter edition: " << endl;
	getline(cin, edition);
	cout << "Enter name: " << endl;
	getline(cin, name);
	cout << "Enter year: " << endl;
	getline(cin, year);
	cout << "Enter number of copies: " << endl;
	cin >> MaxCopies;
}