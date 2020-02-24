// ---------------------------- movieFactory.h ----------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: 
// ------------------------------------------------------------------------
// Purpose: header file for the MovieFactory class.
// ------------------------------------------------------------------------
// Class created specifically to instantiate movie objects whever needed.
// ------------------------------------------------------------------------

#ifndef MOVIEFACTORY_H
#define MOVIEFACTORY_H
#include <iostream>
#include <string>
#include "movie.h"
using namespace std;

class MovieFactory {
    public:
    // Instantiates the appropriate type of movie based on the given
    // genre parameter
    Movie* createMovie(string);
};

#endif