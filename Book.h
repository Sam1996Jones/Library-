#ifndef BOOK_H
#define BOOK_H
#include "Entry.h"


class Book : public Entry {
	string author, publisher, edition;


public:

	/*
	Contructor
	*/
	Book(string _author, string _publisher, string _edition, string _name, string _year, int NumCopies = 1);

	/*
	Constructor, enter data during runtime
	*/
	Book();

	/*
	Prints details of book
	*/
	void printDetails();

};

#endif // !BOOK_H

