// --------------------------------- drama.cpp --------------------------------
// Enina Bogdani, Josiah Zacharias
// Created: 03/08/20
// Modified:
// ----------------------------------------------------------------------------
// Purpose: This class defines a drama movie. It will contain all information 
// related to the Movie and allow for comparisons to other Drama objects.
// ----------------------------------------------------------------------------
// Assumptions:
//  - All input data will be provided in the following format:
//     genre(string) stock(int) director(string) title(string) releaseYear(int)

#include "drama.h"

Drama::Drama(string info) {
    genre = "D";
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

Drama::~Drama() {

}

int Drama::compareTo(Drama* other) {
    if (title > other->title) {
        return 1;
    } else if (title < other->title) {
        return -1;
    }

    if (releaseYear > other->releaseYear) {
        return 1;
    } else if (releaseYear < other->releaseYear) {
        return -1;
    }
    
    return 0;

}