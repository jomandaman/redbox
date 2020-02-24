// -------------------------------- history.h ----------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the History class.
// ------------------------------------------------------------------------
// Class that represents the action of displaying a Customer's transaction 
// history
// ------------------------------------------------------------------------

#ifndef HISTORY_H
#define HISTORY_H

using namespace std;

class History : public Transaction {
    public:
        //-------------------------------------------------Public member methods
        // Constructor
        History(string, HashTable<string, Movie>& HashTable<int, Customer>&);
        // Destructor
        virtual ~History();
        // Prints the Customer's transaction history in chronological order
        virtual void doTransaction(Customer);

    private:
        //------------------------------------------------Private member methods
        // Will check if a Customer exists with the given ID number
        virtual isValid(string info, HashTable<char, Movie>&,
                        HashTable<int, Customer>&);
};

#endif
