// --------------------------------- movie.cpp --------------------------------
// Enina Bogdani, Josiah Zacharias
// Created: 03/06/20
// Modified:
// ----------------------------------------------------------------------------
// Purpose: This class defines a singular Movie object. The movie will contain
// information on the genre, director, title, release year, and current stock 
// in the store. Depending on the type of movie object created, more 
// information may also be stored. All Movie objects will be comparable to 
// other Movies of the same genre.
// ----------------------------------------------------------------------------
// Assumptions:
//  - All input data will be provided in the following format:
//     genre(string) stock(int) director(string) title(string) 
//       In addition, the following movie genre's input will also contain:
//         Comedy: releaseYear(int) 
//         Drama: releaseYear(int)
//         Classics: majorActor(string) releaseMonth(int) releaseYear(int)

#include "movie.h"
// Default constructor
// Assume correct formatting, except code which is checked outside
// Error can only be in movie code, checked in movie factory?
Movie::Movie() {
    genre = "";
    stockInStore = 0;
    director = "";
    title = "";
    releaseYear = 0;
    format = "";
}

// TODO: need?
Movie::~Movie() {

}

string Movie::getGenre() {
    return genre;
}

string Movie::getDirector() {
    return director;
}

string Movie::getTitle() {
    return title;
}

// int Movie::getReleaseYear() {
//     return releaseYear;
// }

int Movie::getStockInStore() {
    return stockInStore;
}

void Movie::increaseStock() {
    stockInStore++;
}

void Movie::decreaseStock() {
    stockInStore--;
}

// TODO: check implementation
// int Movie::compareTo(Movie* movie) {
// }
