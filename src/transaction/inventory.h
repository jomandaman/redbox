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

using namespace std;

class Inventory : public Transaction {
    public:
        //-------------------------------------------------Public member methods
        // Constructor
        Inventory(string, HashTable<string, Movie>& HashTable<int, Customer>&);
        // Destructor
        virtual ~Inventory();
        // Prints the Store's inventory according to the specified requirements 
        // for each different category of Movie
        virtual void doTransaction(Movie);

    private:
        //------------------------------------------------Private member methods
        // Will check if the Store's inventory is empty
        virtual isValid(string info, HashTable<char, Movie>&,
                        HashTable<int, Customer>&);
};

#endif
