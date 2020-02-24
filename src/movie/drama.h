// ------------------------------- drama.h --------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the Drama class.
// ------------------------------------------------------------------------
// Specifed class for a drama movie.
// ------------------------------------------------------------------------

#ifndef DRAMA_H
#define DRAMA_H

#include <iostream>
#include <string>
#include "movie.h"

using namespace std;

class Drama: public Movie {
    public:
        // Constructor
        Drama(string);
        // Virtual destructor
        ~Drama();
        // Compare to other dramas for easy in-order insertion
        virtual int compareTo(Drama);


    private:

};

#endif