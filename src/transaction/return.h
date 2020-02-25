// --------------------------------- return.h ----------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the Return class.
// ------------------------------------------------------------------------
// Class that represents a Customer returning a Movie from a Store. Will contain
// information related to the specific Movie being returned as well as the
// Customer that is returning the movie 
// ------------------------------------------------------------------------

#ifndef RETURN_H
#define RETURN_H

using namespace std;

class Return : public Transaction {
    public:
        //-------------------------------------------------Public member methods
        // Constructor
        Return(string, HashTable<string, Movie>& HashTable<int, Customer>&);
        // Destructor
        virtual ~Return();
        // Will increment the stock of a movie and log the Return Transaction in
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
        virtual isValid(string info, HashTable<char, Movie>&,
                        HashTable<int, Customer>&);
};

#endif
