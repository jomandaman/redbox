//
//  return.cpp
//  Redbox
//
//  Created by Josiah Zacharias on 3/2/20.
//  Copyright © 2020 Josiah Zacharias. All rights reserved.
//

#include "return.h"

using namespace std;

Return::Return(string info, InventoryContainer& inventory, HashTable<Customer>& customers) {
    
    istringstream line(info);
    line >> transactionType;

    int customerID;
    line >> customerID;
    //*customers.retrieve(customerID, *c);
    customers.retrieve(customerID, this->c);
    
    if (c == NULL) {
        cout << "ERROR: customer #" << customerID << " not found. ";
        isValid = false;
        return;
    }
    
    char format;
    line >> format;
    if (format != 'D') {
        cout << "ERROR: format " << format << " not allowed. ";
        isValid = false;
        return;
    }
    
    string genre;
    line >> genre;
    //m = inventory.getKey
    if (m == NULL) {
        cout << "Movie not found. ";
        isValid = false;
        return;
    }
}

Return::~Return() {
    
}

void Return::doTransaction() const {
    // NEED TO CHECK IF MOVIE WAS BORROWED FIRST??
    m->increaseStock();
    c->addToHistory(*this);
}
