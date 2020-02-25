// ------------------------------- movie.h --------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the Movie class.
// ------------------------------------------------------------------------
// Class representing a Represents a single movie. Contains information 
// about the movie itself and how many copies of that movie are available
// in the store.
// ------------------------------------------------------------------------

#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>
#include "movie.h"

using namespace std;

class Movie {

    public:
        // Constructor
        Movie(string);
        // Virtual destructor
        virtual ~Movie();
        // Accessors
        string getGenre();
        string getDirector();
        string getTitle();
        int getReleaseYear();
        int getStockInStore();
        // Compare to other movies for easy in-order insertion
        virtual int compareTo(Movie);

    private:
        // Movie type: Comedy, Drama, Classics
        string genre;
        string director;
        string title;
        int releaseYear;
        // How many of this movie currently in the store
        int stockInStore;

};

#endif