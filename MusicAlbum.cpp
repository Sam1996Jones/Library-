#include "MusicAlbum.h"

/*
Prints details of music album
*/
void MusicAlbum::printDetails() {
	cout << "\nName: " << name << endl
		<< "Year: " << year << endl
		<< "Artist: " << artist << endl
		<< "Record Label: " << recordLabel << endl;
	cout << "There is: " << (MaxCopies - borrowed) << " copies left!" << endl;
}


MusicAlbum::MusicAlbum(string _artist, string _recordLabel, string _name, string _year, int NumCopies)
{ 
	artist = _artist; recordLabel = _recordLabel; name = _name; year = _year;  MaxCopies = NumCopies; 
}

/*
Constructor, enter data during runtime
*/
MusicAlbum::MusicAlbum()
{
	cout << "Enter artist: " << endl;
	getline(cin, artist);
	cout << "Enter record label: " << endl;
	getline(cin, recordLabel);
	cout << "Enter name: " << endl;
	getline(cin, name);
	cout << "Enter year: " << endl;
	getline(cin, year);
	cout << "Enter number of copies: " << endl;
	cin >> MaxCopies;
}