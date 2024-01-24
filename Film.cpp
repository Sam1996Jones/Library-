#include "Film.h"

/*
Prints details of film
*/
void Film::printDetails() {
	cout << "\nName: " << name << endl
		<< "Year: " << year << endl
		<< "Director: " << director << endl
		<< "Language: " << language << endl;
	cout << "There is: " << (MaxCopies - borrowed) << " copies left!" << endl;
}

/*
Constructor
*/
Film::Film(string _director, string _language, string _name, string _year, int NumCopies)
{
	director = _director; language = _language; name = _name; year = _year; MaxCopies = NumCopies;
}

/*
Constructor, enter data during runtime
*/
Film::Film()
{
	cout << "Enter director: " << endl;
	getline(cin, director);					// cin >> reads input up to a space, therefore getline will get entire line as input 
	cout << "Enter language: " << endl;
	getline(cin, language);
	cout << "Enter name: " << endl;
	getline(cin, name);
	cout << "Enter year: " << endl;
	getline(cin, year);
	cout << "Enter number of copies: " << endl;
	cin >> MaxCopies;						//integer value therefore cin >> appropriate
}