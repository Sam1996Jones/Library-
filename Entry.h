#ifndef ENTRY_H
#define ENTRY_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Entry {
	

	/*
	Removes name from list of whos borrowed item
	*/
	void RemoveName(string _name);

protected:		  //Allows subclass to access variables, but still remain private to the user
	string name, year; // name of item, year of item.
	int borrowed; //Number of items borrowed.
	vector <string> BorrowedBy;		// list of people who have borrowed an item
	int MaxCopies;  // CopiesAvailable;

public:
	/*
	Constructor
	*/
	Entry() { borrowed = 0; }; //Initialise the number of borrowed items to 0 when the object is declared

	/*
	Determine who has borrowed the item
	*/
	void entryBorrowed(string _name);

	/*
	Determine whether the item has been returned
	*/
	void entryReturned(string _name);

	/*
	Pure virtual function. Stops user creating an Entry object
	*/
	virtual void printDetails() = 0;

	/*
	Prints the number of copies available in the library
	*/
	void CopiesLeft() { cout << "There is: " << (MaxCopies - borrowed) << " copies left!" << endl; }

	/*
	Add or decrease the maximum number of copies of the item. Enter -1 to decrease 
	*/
	void AddMinusCopies(int Number) { MaxCopies = MaxCopies + Number; }

	/*
	See whos borrowed the item(s)
	*/
	void WhoBorrowed();

	/*
	Edit name of item
	*/
	void editName(string _name) { name = _name; }

	/*
	Edit year of item
	*/
	void editYear(string _year) { year = _year; }
};

#endif // !ENTRY_H

