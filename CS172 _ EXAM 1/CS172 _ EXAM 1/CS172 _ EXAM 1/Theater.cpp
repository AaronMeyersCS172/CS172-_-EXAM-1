#include <iostream>
#include <string>
#include "Theater.h"

/*I affirm that all code given below was written solely by me,
Aaron Meyers
,and that any help I received adhered to the rules stated for this exam.*/



// This function takes in inputs from the user and transfers them to the variable of "TheaterName" and "TheaterPhone" 
Theater::Theater(string Name, string Phone)
{
	TheaterName = Name; //Transfers the value of "Name" to the variable "TheaterName" and uses it as the name of the theater
	TheaterPhone = Phone; //Transfers value of "Phone" to TheaterPhone" and uses it as the phone number for the theater
}

// This function takes the values that are stored in the "Movie" class and makes them accessiable in the "Theater" class
// This function takes the values taken from the "Movie" class and stores them into the corresponding array 
void Theater::AddMovie(Movie& Movie)
{
	MovieTITLE[x] = Movie.getTitle(); // Takes the value of "MovieTitle" from the "Movie" class and stores it in the "MovieTITLE" array
	MovieHOURS[y] = Movie.getShowTime(); // Takes the value of "MovieShowTime" from the "Movie" class and stores it in the "MovieHOURS" array
	MovieGENRE[z] = Movie.getGenre(); // Takes the value of "MovieGenre" from the "Movie" class and stores it in the "MovieGENRE" array

	x++; // Increases the the variable in the "MovieTITLE" array by one so that it can take in the next value 
	y++; // Increases the the variable in the "MovieHOURS" array by one so that it can take in the next value 
	z++; // Increases the the variable in the "MovieGENRE" array by one so that it can take in the next value 
}

// This function will return the title of the movie that plays after the hour that the user inputs
string Theater::GetMovieForHour(int hour)
{
	int MovieAndHourSIZE = 10; // Establishes a max limit for the loop below

	if (hour < 0 || hour > 24) // 
	{
		return Failure; // Returns an empty string to signify that the hour that the user inputted is not in the acceptable range
	}

	// This loop will go through teh array to find the values that match or fall with the spectrum of the hour that the user inputted
	// This loop will stop when it returns the title of the movie that plays after the "hour" value that the user inputted 
	for (int i = 0; i <= MovieAndHourSIZE; i++)
	{
		// This executes if the "hour" value from teh user falls when a range between the values that are stored in the "MovieHOURS" array
		if (hour >= MovieHOURS[i] && hour < MovieHOURS[i + 1])
		{
			return MovieTITLE[i + 1]; //Returns the movie that plays after the "hour" value
		}
	}

	return Failure; // Returns an empty string to signify that the hour that the user inputted does not match with any movies in the array
}

//This function will return the first showtime of the movie genre that the user inputs
int Theater::GetShowTimeForGenre(string Genre)
{
	int GenreSIZE = 10; // Establishes a max limit for the loop below

	// This loop will go through the values that are stored in the "MovieGENRE" array to find a match for the genre that the user inputs
	for (int q = 0; q <= GenreSIZE; q++)
	{
		// This executes if a value in the "MovieGENRE" array mathcs the genre that the user inputs
		if (MovieGENRE[q] == Genre)
		{
			return MovieHOURS[q]; // This will return the hour in which the the first movie of that genre will play
		}
	}
}

// This function will establish a price for popcorn and returns it
int Theater::GetPopcornPrice()
{
	PopcornCost = 2.50; // Declares the price for popcorn

	return PopcornCost; // Returns the price
}

// This function will return a price for coke and return it
int Theater::GetCokePrice()
{
	CokeCost = 1.50; // Declares the price for coke

	return CokeCost; // Returns the price
}