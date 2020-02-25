// --------------------------- transactionfactory.h ----------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the TransactionFactory class.
// ------------------------------------------------------------------------
// Class that is responsible for determining what type of Transaction object
// should be instantiated. Allows for dynamic binding of Transaction objects.
// ------------------------------------------------------------------------

#ifndef TRANSACTIONFACTORY_H
#define TRANSACTIONFACTORY_H

#include "../movie/movie.h"
#include "../customer/customer.h"
#include "../store/store.h"
#include <string>

using namespace std;

class TransactionFactory {
    public:
        //-------------------------------------------------Public member methods
        // Will parse through passed parameter information to determine which
        // type of Transaction object to create and return
        Transaction createTransaction(string info,
                                      HashTable<string, Movie>&,
                                      HashTable<int, Customer>&) const;

    private:
        // possible hepler methods
};

#endif
