//
//  borrow.cpp
//  Redbox
//
//  Created by Josiah Zacharias on 3/2/20.
//  Copyright © 2020 Josiah Zacharias. All rights reserved.
//

#include "borrow.h"


using namespace std;

Borrow::Borrow(string info, InventoryContainer& inventory, HashTable<Customer>& customers) {
    
    istringstream line(info);
    line >> transactionType;

    int customerID;
    line >> customerID;
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

Borrow::~Borrow() {
    
}

void Borrow::doTransaction() const {
    
    if (m->getStockInStore() < 1) {
        cout << "Error: all copies of " << m->getTitle() << " are currently checked out";
    } else {
        m->decreaseStock();
        c->addToHistory(*this);
    }
}
