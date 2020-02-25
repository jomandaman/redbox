// ------------------------------ transaction.h --------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the Transaction class.
// ------------------------------------------------------------------------
// Class representing a single transaction that may be related to Movie, Store
// or Customer objects. 
// ------------------------------------------------------------------------

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "../movie/movie.h"
#include "../customer/customer.h"
#include "../store/store.h"
#include "../support/hashtable.h"
#include <string>

using namespace std;

class Transaction {
    public:
        //-------------------------------------------------Public member methods
        // Constructor
        Transaction();
        // Virtual destructor
        virtual ~Transaction();
        // Using the type of Transaction object that is instantiated, determine 
        // and conduct the necessary action
        virtual void doTransaction() const;

    private:
        //------------------------------------------------Private member methods
        // Determines if the transaction can occur based on movie & customer 
        // information
        virtual bool isValid(Movie) const;
};

#endif
