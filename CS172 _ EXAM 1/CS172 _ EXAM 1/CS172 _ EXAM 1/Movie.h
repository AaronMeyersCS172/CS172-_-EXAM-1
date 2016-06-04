#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
	/*I affirm that all code given below between the stars was written solely by me,
	Aaron Meyers
	,and that any help I received adhered to the rules stated for this exam.
	***********************************************************************************************************************
	************************************************************************************************************************/

	string MOVIETitle; // This variable acts as the title of the movie that the user inputs
	string MOVIEGenre; // This variable acts as the genre of the movie that the user inputs
	int MOVIEShowTime; // This variable acts as the showtime that the movie the user inputs starts at
		
	/*************************************************************************************************************************
	***************************************************************************************************************************/

public:

	Movie(); // This function contains default values for the "MovieTitle", "MovieGenre" and "MovieShowTime"
	Movie(string Title, string Genre, int ShowTime); // Takes input from the user and transfers their values to corresponding the private variables of the "Movie" class
	string getTitle(); // Returns the value of "MovieTitle"
	string getGenre(); // Returns the value of "MovieGenre"
	int getShowTime(); // Returns teh value of "MovieShowTime"

};

#endif