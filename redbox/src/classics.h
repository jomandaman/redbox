// ------------------------------ classics.h ------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: 
// ------------------------------------------------------------------------
// Purpose: header file for the Classics class.
// ------------------------------------------------------------------------
// Specifed class for a classics movie.
// ------------------------------------------------------------------------

#ifndef CLASSICS_H
#define CLASSICS_H
#include <iostream>
#include <string>
#include "movie.h"
using namespace std;

class Classics : public Movie {
    public:
        // Constructor
        Classics(string);
        // Virtual destructor
        ~Classics();
        // Compare to other comedies for easy in-order insertion
        virtual int compareTo(Classics);
        // Main actor, specific to classics
        string majorActor;
        int releaseMonth;


    private:

};

#endif