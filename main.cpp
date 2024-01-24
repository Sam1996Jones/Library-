#include <iostream>
#include "Entry.h"
#include "MusicAlbum.h"
#include "Book.h"
#include "Film.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;


int main() {
	MusicAlbum Ella("Ella Eyre", "-", "Feline", "2014", 1);
	Book aBook("Sam Jones", "Sam Jones", "2", "A book by Sam Jones", "2018",3);
	Film aFilm("Sam Jones", "Englsh", "A film by Sam Jones", "2050",1);
	Entry *e1 = &Ella;		//Faster and more efficient to use pointers of an object.
	Entry *e2 = &aBook;
	Entry *e3 = &aFilm;
	vector <Book> books;
	ifstream in("books.txt");
	string Line, author, publisher,edition, title, year;
	
	e1->printDetails();		//The object type does not need to be specified
	//Film film2;
	//film2.printDetails();
	
	e3->printDetails();
	aFilm.editDirector("Sam Lee Jones");
	aFilm.editYear("2060");
	e3->printDetails();
	e2->printDetails();
	e2->entryReturned("Sam");
	
	e1->AddMinusCopies(2);
	e1->entryBorrowed("Sam");
	e1->entryBorrowed("Emily");
	e1->entryBorrowed("Cameron");
	e1->WhoBorrowed();
	e1->entryReturned("Emily");
	e1->WhoBorrowed();
	
	while (getline(in, author)){
		getline(in, publisher);
		getline(in, edition);
		getline(in, title);
		getline(in, year);
		Book temp(author, publisher, edition, title, year);
		books.push_back(temp);
	}
	for (int i = 0; i < books.size(); i++) {
		books[i].printDetails();
	}
	
	system("pause");
	return 0;
}