// ---------------------------------- drama.h ---------------------------------
// Enina Bogdani, Josiah Zacharias
// Created: 02/23/20
// Modified:
// ----------------------------------------------------------------------------
// Purpose: This class defines a drama movie. It will contain all information 
// related to the Movie and allow for comparisons to other Drama objects.
// ----------------------------------------------------------------------------
// Assumptions:
//  - All input data will be provided in the following format:
//     genre(string) stock(int) director(string) title(string) releaseYear(int)

#ifndef DRAMA_H
#define DRAMA_H

#include "movie.h"

using namespace std;

class Drama: public Movie {
    public:
        //-------------------------------------------------Public member methods
        // Constructor: Creates a Drama object and populates the genre, title,
        // director, and releaseYear fields
        Drama(string);
        // Virtual destructor: Destroys the Drama object
        virtual ~Drama();
        // Returns the movie release year
        virtual int compareTo(Drama*);
};

#endif