//
//  history.cpp
//  Redbox
//
//  Created by Josiah Zacharias on 3/2/20.
//  Copyright © 2020 Josiah Zacharias. All rights reserved.
//

#include "history.h"

History::History(string info, HashTable<Customer>& customers) {
    
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
    
    
}


History::~History() {
    
}


void History::doTransaction() const {
    c->getHistory();
}
