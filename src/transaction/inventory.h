// ------------------------------- inventory.h ---------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the Inventory class.
// ------------------------------------------------------------------------
// Class that represents the action of displaying a Store's inventory
// ------------------------------------------------------------------------

#ifndef INVENTORY_H
#define INVENTORY_H

#include "transaction.h"

using namespace std;

class Inventory : public Transaction {
    public:
        //-------------------------------------------------Public member methods
        // Constructor
        Inventory(HashTable<string, Movie>&);
        // Destructor
        virtual ~Inventory();
        // Prints the Store's inventory according to the specified requirements 
        // for each different category of Movie
        virtual void doTransaction(HashTable<string, Movie>&) const;

    private:
        //------------------------------------------------Private member methods
        // Will check if the Store's inventory is empty
        virtual isValid(HashTable<char, Movie>&) const;
};

#endif
