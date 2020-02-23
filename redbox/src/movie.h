// ------------------------------- movie.h --------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: 
// ------------------------------------------------------------------------
// Purpose: header file for the Movie class.
// ------------------------------------------------------------------------
// Class representing a Represents a single movie. Contains information 
// about the movie itself and how many copies of that movie are available
// in the store.
// ------------------------------------------------------------------------

#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <string>
using namespace std;

class Movie {
    public:
        // Constructor
        Movie(string);
        // Virtual destructor
        virtual ~Movie();
        // Movie type: Comedy, Drama, Classics
        string genre;
        string director;
        string title;
        int releaseYear;
        // How many of this movie currently in the store
        int stockInStore;
        // Compare to other movies for easy in-order insertion
        virtual int compareTo(Movie);

    private:
        // possible hepler methods

};

#endif