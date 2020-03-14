// --------------------------- transactionfactory.h ----------------------------
// Enina Bogdani, Josiah Zacharias
// Created: 02/23/20
// Modified: 02/25/20
// -----------------------------------------------------------------------------
// Purpose: This class defines a factory that is responsible for determining
// what type of Transaction object should be instantiated based on provided
// input. Allows for dynamic binding of Transaction objects.
// ------------------------------------------------------------------------
// Assumptions:
//  - File input will be provided in the formats neccessary for each type of
//    associated Transaction object

#include "transactionfactory.h"
#include <string>

Transaction* TransactionFactory::createTransaction(string info,
                                                  InventoryContainer& inventory,
                                                  HashTable<Customer>& customers) {
    Transaction* t;
    char transType = info.front();
    
    switch (transType) {
        case 'R':
            t = new Return(info, inventory, customers);
            break;
        case 'B':
            t = new Borrow(info, inventory, customers);
            break;
        case 'I':
            t = new Inventory(inventory);
            break;
        case 'H':
            t = new History(info, customers);
            break;
        default:
            t = new Transaction();
            t->isValid = false;
            cout << "ERROR: " << transType << " is not a valid transaction type. ";
            break;
    }
    
    return t;
}
