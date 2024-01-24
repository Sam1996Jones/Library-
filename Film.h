#ifndef FILM_H
#define FILM_H
#include "Entry.h"

class Film : public Entry {
	string director, language;

public:

	/*
	Constructor
	*/
	Film(string _director, string _language, string _name, string _year, int NumCopies = 1);

	/*
	Constructor, enter data during runtime
	*/
	Film();

	/*
	Prints details of film
	*/
	void printDetails();

	/*
	Edit director
	*/
	void editDirector(string _director) { director = _director; }

	/*
	Edit language
	*/
	void editLanguage(string _language) { language = _language; }

};
#endif // !FILM_H
