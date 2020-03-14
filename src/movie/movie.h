// ---------------------------------- movie.h ----------------------------------
// Enina Bogdani, Josiah Zacharias
// Created: 02/23/20
// Modified:
// -----------------------------------------------------------------------------
// Purpose: This class defines a singular Movie object. The movie will contain
// information on the genre, director, title, release year, and current stock in
// the store. Depending on the type of movie object created, more information
// may also be stored. All Movie objects will be comparable to other Movies of
// the same genre.
// -----------------------------------------------------------------------------
// Assumptions:
//  - All input data will be provided in the following format:
//     genre(string) stock(int) director(string) title(string) 
//       In addition, the following movie genre's input will also contain:
//         Comedy: releaseYear(int) 
//         Drama: releaseYear(int)
//         Classics: majorActor(string) releaseMonth(int) releaseYear(int)

#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Movie {

    public:
        //-------------------------------------------------Public member methods
        // Defaut constructor
        Movie();
        // Virtual destructor: Destroys the Movie object
        virtual ~Movie();
        // Returns the movie genre
        string getGenre();
        // Returns the movie director
        string getDirector();
        // Returns the movie title
        string getTitle();
        // Returns the movie release year
        int getReleaseYear();
        // Returns how many copies of the movie are available in the store
        int getStockInStore();
        // Increase the stock by 1
        void increaseStock();
        // Decrease the stock by 1
        void decreaseStock();
        // Will compare this Movie object to the passed parameter Movie object.
        // Returns 1 if this is greater than the parameter, -1 if this is less 
        // than the parameter, and 0 if the two Movies are equal. 
        virtual int compareTo(Movie*) = 0;

    protected:
        // Genre of the movie
        string genre;
        // How many copies of this movie are currently in the store
        int stockInStore;
        // Director of the movie
        string director;
        // Title of the movie
        string title;
        // // Year the movie was released
        int releaseYear;
        //Format that the movie is stored as
        string format;
};

#endif