// ------------------------------ transaction.h --------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias
// Created: 02/23/20
// Modified: 02/25/20
// -----------------------------------------------------------------------------
// Purpose: This class defines an interface for a single transaction. The object
// may be related to Movie, Store, or Customer objects depending on which type
// of Transaction object is created.
// -----------------------------------------------------------------------------

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
        // Constructor: Creates an empty Transaction object
        Transaction();
        // Virtual destructor: Destroys the Transaction object
        virtual ~Transaction();
        // Using the type of Transaction object that is instantiated, determine 
        // and conduct the necessary action
        virtual void doTransaction() const;

    private:
};

#endif
