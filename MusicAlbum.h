#ifndef MUSICALBUM_H
#define MUSICALBUM_H
#include "Entry.h"

class MusicAlbum : public Entry {
	string artist, recordLabel;

public:
	
	/*
	Constructor
	*/
	MusicAlbum(string _artist, string _recordLabel, string _name, string _year, int NumCopies = 1);

	/*
	Constructor, enter data during runtime
	*/
	MusicAlbum();

	/*
	Prints details of music album
	*/
	void printDetails();


};


#endif // !MUSICALBUM_H
