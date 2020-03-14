//
//  inventory.cpp
//  Redbox
//
//  Created by Josiah Zacharias on 3/2/20.
//  Copyright © 2020 Josiah Zacharias. All rights reserved.
//

#include "inventory.h"

Inventory::Inventory(InventoryContainer& inventory) {
    i = &inventory;
}


Inventory::~Inventory() {
    
}

void Inventory::doTransaction() const {
    i->displayAll();
}
