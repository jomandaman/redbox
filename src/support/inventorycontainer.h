//
//  inventory.hpp
//  Redbox
//
//  Created by Josiah Zacharias on 3/6/20.
//  Copyright © 2020 Josiah Zacharias. All rights reserved.
//

#ifndef INVENTORYCONTAINER_H
#define INVENTORYCONTAINER_H

#include <stdio.h>
#include "bintree.h"
#

class InventoryContainer {

    public:
        // Constructor: Will create an empty HashTable object
        InventoryContainer();
        // Destructor: Will delete the HashTable object
        ~InventoryContainer();
        // Inserts a new object at the passed Key location
        void insert(const BinTree&);
        // Removes the object contained in the passed Key location
        void remove(char);
        // Retrieves the object present at the passed Key location
        BinTree* retrieve(int) const;
    
        void displayAll();

    private:
        // Array that holds the data
        BinTree* data;
        // Array size
        int size;
        // Hashing function: Takes in a Key and returns the hashed index
        int hash() const;

};

#endif /* inventory_hpp */
