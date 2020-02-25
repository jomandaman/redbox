// ------------------------------- customer.h -----------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 24, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the Customer class.
// ------------------------------------------------------------------------
// Represents a singular customer. Contains personal information about
// the customer, as well as their movies and transaction history
// ------------------------------------------------------------------------

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <list>
#include <../movie/movie.h>
#include <../transaction/transaction.h>
#include <hashtable.h>

using namespace std;

class Customer {

    public:
        // Constructor
        Customer(string);

    private:
        // Number representing the customer
        int customerID;
        // First name of the Customer
        string firstName;
        // Last name of the Customer
        string lastName;
        // All transactions from this customer
        list<Transaction> transactionHistory;
        
};

#endif