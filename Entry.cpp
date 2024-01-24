#include "Entry.h"

/*
Determine who has borrowed the item
*/
void Entry::entryBorrowed(string _name) {
	if (borrowed == MaxCopies) {
		cout << "\nSorry " << _name <<"! There are no more copies of this item left to borrow!\n" << endl;
	}
	else {
		borrowed += 1;
		BorrowedBy.push_back(_name);
		printDetails(); //Prints details of book that is being borrowed
		cout << "Has been borrowed by: " << _name << "!" << endl;
		CopiesLeft();
	}
}

/*
Determine whether the item has been returned
*/
void Entry::entryReturned(string _name) {
	if (borrowed == 0) {
		//printDetails();
		cout << "All items have been already been returned!\n";
	}
	else {
		borrowed -= 1;
		printDetails(); //Prints details of returned book
		cout << "Has been returned by " << _name << "!" << endl;
		CopiesLeft();
		RemoveName(_name);
	}
}

/*
Removes name from list of whos borrowed item
*/
void Entry::RemoveName(string _name) {
	for (int i = 0; i < BorrowedBy.size() - 1; i++) {
		if (_name == BorrowedBy[i]) {
			for (int z = i; z < BorrowedBy.size() - 1; z++) {
				BorrowedBy[z] = BorrowedBy[z + 1];
			}
		}
	}
	BorrowedBy.pop_back();
}

/*
See whos borrowed the item(s)
*/
void Entry::WhoBorrowed() {
	printDetails();
	cout << "Has been borrowed by: " << endl;
	for (int i = 0; i < BorrowedBy.size(); i++) {
		cout << BorrowedBy[i] << endl;
	}

}
