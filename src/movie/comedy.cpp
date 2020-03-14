// --------------------------------- comedy.cpp -------------------------------
// Enina Bogdani, Josiah Zacharias
// Created: 03/08/20
// Modified:
// ----------------------------------------------------------------------------
// Purpose: This class defines a comedy movie. It will contain all information 
// related to the Movie and allow for comparisons to other Drama objects.
// ----------------------------------------------------------------------------
// Assumptions:
//  - All input data will be provided in the following format:
//     genre(string) stock(int) director(string) title(string) releaseYear(int)

#include "comedy.h"

Comedy::Comedy(string info) {
    genre = "F";
    istringstream line(info);
    string stock;
    line >> stock;
    stockInStore = stoi(stock);
    line >> director >> title;
    string year;
    line >> year;
    releaseYear = stoi(year);
    format = "D";
}

Comedy::~Comedy() {

}

int Comedy::compareTo(Comedy* other) {
    if (director > other->director) {
        return 1;
    } else if (director < other->director) {
        return -1;
    }

    if (title > other->title) {
        return 1;
    } else if (title < other->title) {
        return -1;
    }
    
    return 0;
}

