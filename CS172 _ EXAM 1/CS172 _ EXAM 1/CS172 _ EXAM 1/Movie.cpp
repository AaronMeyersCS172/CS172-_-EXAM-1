#include "Movie.h"
#include "Theater.h"

/*I affirm that all code given below was written solely by me,
Aaron Meyers
,and that any help I received adhered to the rules stated for this exam.*/



// This function contains default value for the "Movie" class private variables 
Movie::Movie()
{
	MOVIETitle = "Bull Durham"; // Title of the movie
	MOVIEGenre = "Comedy"; // Genre of the Movie
	MOVIEShowTime = 0; // The hour that the movie starts
}


Movie::Movie(string Title, string Genre, int ShowTime)
{
	MOVIETitle = Title; // Transfers the value of the user's input "Title" to "MovieTitle"
	MOVIEGenre = Genre; // Transfers the value of the user's input "Genre" to "MovieGenre"
	MOVIEShowTime = ShowTime; // Transfers the value of the user's input "ShowTime" to "MovieShowTime"
}

// This function returns the value "MovieTitle"
string Movie::getTitle()
{
	return MOVIETitle;
}

// This function returns the value "MovieGenre"
string Movie::getGenre()
{
	return MOVIEGenre;
}

// This function returns the value "MovieShowTime"
int Movie::getShowTime()
{
	return MOVIEShowTime;
}