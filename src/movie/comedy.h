// ------------------------------- comedy.h -------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: 
// ------------------------------------------------------------------------
// Purpose: header file for the Comedy class.
// ------------------------------------------------------------------------
// Specifed class for a comedy movie.
// ------------------------------------------------------------------------

#ifndef COMEDY_H
#define COMEDY_H
#include <iostream>
#include <string>
#include "movie.h"
using namespace std;

class Comedy : public Movie {
    public:
        // Constructor
        Comedy(string);
        // Virtual destructor
        ~Comedy();
        // Compare to other comedies for easy in-order insertion
        virtual int compareTo(Comedy);

    private:

};

#endif