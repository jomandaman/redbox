// --------------------------------- borrow.h ----------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the Borrow class.
// ------------------------------------------------------------------------
// Class that represents a Customer borrowing a Movie from a Store. Will contain
// information related to the specific Movie being borrowed as well as the
// Customer that is borrowing the movie 
// ------------------------------------------------------------------------

#ifndef BORROW_H
#define BORROW_H

#include "transaction.h"

using namespace std;

class Borrow : public Transaction {
    public:
        //-------------------------------------------------Public member methods
        // Constructor
        Borrow(string, HashTable<string, Movie>&, HashTable<int, Customer>&);
        // Destructor
        virtual ~Borrow();
        // Will decrement the stock of a movie and log the Borrow Transaction in
        // the Customer's history field
        virtual void doTransaction(Store&, Customer&, Movie&) const;

    private:
        //-------------------------------------------------Private member fields
        // Pointer to the Movie object associated with this transaction
        Movie* m;
        // Pointer to the Customer object associated with this transaction
        Customer* c;
        
        //------------------------------------------------Private member methods
        // Will check that the movie exists in the Store's inventory and that
        // a Customer exists with the matching ID number
        virtual bool isValid(string info, HashTable<char, Movie>&,
                        HashTable<int, Customer>&) const;
};

#endif
