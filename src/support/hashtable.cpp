// ------------------------------- hashtable.cpp -----------------------------
// Enina Bogdani, Josiah Zacharias
// Created: 02/23/20
// Modified: 02/25/20
// ------------------------------------------------------------------------
// Purpose: This class will define a HashTable that stores data in an array. The
// HashTable will use open hashing to compute the correct array index in which
// to store the data.
// ------------------------------------------------------------------------
// Assumptions:
//  - Only strings and ints will be accepted as Key values for this table

#include <stdio.h>

 template <typename T>
HashTable<T>::HashTable() {
     size = NULL;
     data = NULL;
 }

template <typename T>
HashTable<T>::HashTable(int tableSize) {
    size = tableSize;
    data = new HashEntry*[size];
    for (int i = 0; i < size; i++) {
        data[i] = nullptr;
    }
}


//template <typename T>
//HashTable<T>::HashEntry::HashEntry(int k, T* d) : key(k), value(d) { }


template <typename T>
HashTable<T>::~HashTable() {
    for (int i = 0; i < size; i++) {
        if (data[i] != nullptr) {
            delete data[i];
            data[i] = nullptr;
        }
    }

    //delete[] data;
    data = nullptr;
}

// Key is cusomter id, value is Customer pointer
template <typename T>
bool HashTable<T>::insert(int key, T value) {
    int bucket = this->hash(key);

    for (int i = 0; i < size; i++) {
        int tryBucket = (bucket + i) % size;
        if (data[tryBucket] == nullptr) {
            data[tryBucket] = new HashEntry();
            data[tryBucket]->key = key;
            data[tryBucket]->value = &value;
            return true;
        // If try to insert same key twice, return false
        } else if (data[tryBucket]->key == key) {
            return false;
        }
    }
    
    // If reach this point, table is full.
    resize();
    return insert(key, value);
}





template <typename T>
bool HashTable<T>::retrieve(int key, T* value) const {
    int bucket = this->hash(key);

    for (int i = 0; i < size; i++) {
        int tryBucket = (bucket + i) % size;
        // nullptr means value was never inserted
        if (data[tryBucket] != nullptr && data[tryBucket]->key == key) {
            value = data[tryBucket]->value;
            return true;
        }
    }

    return false;
}

template <typename T>
bool HashTable<T>::remove(int key) {
    int bucket = this->hash(key);
    for (int i = 0; i < size; i++) {
        int tryBucket = (bucket + i) % size;
        // nullptr means value was never inserted
        if (data[tryBucket] != nullptr && data[tryBucket]->key == key) {
            delete data[tryBucket];
            data[tryBucket] = nullptr;
            return true;
        }
    }
    return false;
}

template <typename T>
int HashTable<T>::hash(int key) const {
    int hashIndex = key % size;
    return hashIndex;
}

template <typename T>
void HashTable<T>::resize() {
    int newSize = size * 2;
    HashEntry** newData = new HashEntry*[newSize];
    for (int i = 0; i < newSize; i++) {
        if (i < size) {
            newData[i] = data[i];
        } else {
            newData[i] = nullptr;
        }
    }
    delete[] data;
    data = newData;
    size = newSize;
}
