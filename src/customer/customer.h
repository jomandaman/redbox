// -------------------------------- customer.h ---------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias
// Created: 02/23/20
// Modified: 02/25/20
// -----------------------------------------------------------------------------
// Purpose: This class defines a singular customer. Contains information about
// the customer as well as the movies they have checked out and their
// transaction history
// -----------------------------------------------------------------------------
// Assumptions:
//  - Input provided to the constructor will be given in the form of: 
//      customerID# (int) lastName (string) firstName (string)

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <list>
#include "../support/hashtable.h"
#include "../movie/movie.h"
#include "../transaction/transaction.h"

using namespace std;

class Customer {

    public:
        //-------------------------------------------------Public member methods
        // Constructor: Will populate the customerID, firstName, and lastName 
        // fields after parsing through the passed input string
        Customer(string);

    private:
        //-------------------------------------------------Private member fields
        // Number representing the customer
        int customerID;
        // First name of the customer
        string firstName;
        // Last name of the customer
        string lastName;
        //------------------------------------------------Private member methods
        // All transactions from this customer
        list<Transaction> transactionHistory;
        
};

#endif