// -------------------------------- classics.cpp ------------------------------
// Enina Bogdani, Josiah Zacharias
// Created: 03/08/20
// Modified:
// ----------------------------------------------------------------------------
// Purpose: This class defines a classic movie. It will contain all information
// related to the Movie and allow for comparisons to other Drama objects.
// ----------------------------------------------------------------------------
// Assumptions:
//  - All input data will be provided in the following format:
//     genre(string) stock(int) director(string) title(string) releaseYear(int)

#include "classics.h"

Classics::Classics(string info) {
    genre = "C";
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

Classics::~Classics() {

}

string Classics::getMajorActor() {
    return majorActor;
}
int Classics::getReleaseMonth() {
    return releaseYear;
}

int Classics::compareTo(Classics* other) {
    if (releaseYear > other->releaseYear) {
        return 1;
    } else if (releaseYear < other->releaseYear) {
        return -1;
    }

    if (releaseMonth > other->releaseMonth) {
        return 1;
    } else if (releaseMonth < other->releaseMonth) {
        return -1;
    }

    if (majorActor > other->majorActor) {
        return 1;
    } else if (majorActor < other->majorActor) {
        return -1;
    }

    return 0;
}