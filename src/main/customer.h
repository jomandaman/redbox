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
#include <integer>
#include <list>
#include <movie.h>
#include <transaction.h>
#include <hashtable.h>

using namespace std;

class Customer {

    public:
        // Constructor
        Customer(String);

    private:
        // Number representing the customer
        int customerID;
        // First name of the Customer
        String firstName;
        // Last name of the Customer
        String lastName;
        // All items the customer has borrowed currently 
        HashTable<Movie*, Integer> borrowedItems;
        // All transactions from this customer
        List<Transaction> transactionHistory;
        
};

#endif