// ------------------------------- hashtable.h -----------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias; CSS 502
// Created: February 23, 2020
// Modified: February 24, 2020
// ------------------------------------------------------------------------
// Purpose: Header file for the HashTable class.
// ------------------------------------------------------------------------
// Design for HashTable
// ------------------------------------------------------------------------

#ifndef HASHTABLE_H
#define HASHTABLE_H

using namespace std;

template<class Key, class Value> 
class HashTable {

    public:
        // Constructor
        HashTable<Key, Value>();
        // Destructor 
        ~HashTable();
        // Inserts a new object at the given key
        void insert(const Key&, const Value&);
        // Removes the object at the given key
        void remove(const Key&);
        // Retrieves the object present at the passed key
        Value* retrieve(const Key&);

    private: 
        // Array that holds the data
        Value* data;
        // Hashing function: Takes in a key value and returns the hashed index
        int hash(const Key&);

};

#endif