#ifndef THEATER_H
#define THEATER_H

#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

//PT -- the array should be an array of movie objects, and not three arrays containing the three parts of a movie.
//    Movie movies[11];

class Theater
{
private:

	/*I affirm that all code given below between the stars was written solely by me,
	Aaron Meyers
	,and that any help I received adhered to the rules stated for this exam.
	*****************************************************************************************************************************
	******************************************************************************************************************************/

	string TheaterName; // This variable acts as the name of the theater
	string TheaterPhone; // This variable acts as the phone number of the theater
	int MovieHOURS[11]; // This array will store the hours that the user inputs for the corresponding movie
	string MovieTITLE[11]; // This array will store the title of the movies that the user inputs
	string MovieGENRE[11]; // This array will store the genre of the movie that the usre inputs
	
	string Failure = ""; // This variable is for when the program fails one of the testing parameters and it will return nothing
	int x = 0; // This variable is to help store values into the "MovieTitle" array
	int y = 0; // This variable is to help store values into the "MovieHours" array
	int z = 0; // This variable is to help store values into the "MovieGenre" array

	double PopcornCost; // This variable acts as the price for popcorn
	double CokeCost; //This variable acts as the price for Coca'Cola

	/****************************************************************************************************************************
	******************************************************************************************************************************/


public:

	Theater(string Name, string Phone); //This function takes in user input for the name of the theater and it's phone number
	void AddMovie(Movie& Movie); // This function takes the values that are stored in the "Movie" class and makes them accessiable in the "Theater" class
	string GetMovieForHour(int hour); // This function returns the next movie that plays after the "hour" value that the user inptus
	
	int GetShowTimeForGenre(string Genre); // This function return the hour that corresponds with the "Genre" value that the user inputs
	
	int GetPopcornPrice(); // Gives the variable "PopcornCost" a value and returns it
	int GetCokePrice(); // Gives the variable "CokeCost" a value and returns it

};

#endif
