// ------------------------------- store.h --------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the Store class.
// ------------------------------------------------------------------------
// Represents the Store which holds all movies. Contains information on all
// movies available and all customers that are borrowing from the store. 
// Will conduct all actions taken in from an input files
// ------------------------------------------------------------------------

#ifndef STORE_H
#define STORE_H

#include <fstream>
#include <string>
#include <list>
#include <../support/bintree.h>
#include <hashtable.h>
#include <stdint.h>

using namespace std;

class Store {

    public:
        // Constructor
        Store(string);
        // functions
        // Will fill the inventory field of based on data from input file
        void populateInventory(ifstream &);
        // Will create Customer objects and store them in the customers field
        void populateCustomers(ifstream &);
        // Will read in all the commands from the input file and add them to a
        // Linked List
        void readTransactions(ifstream &);

    private:
        // Name of the store
        string storeName;
        // All available movies
        HashTable<string, BinTree> inventory;
        // All the Customers of the Store
        HashTable<int, Customer> customers;
        // All valid transactions that are read in from input file
        list<Transaction> transactions;
        // Will execute all transactions from the transactions field
        void executeTransactions();
        
};

#endif