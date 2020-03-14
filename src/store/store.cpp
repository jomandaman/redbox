// ---------------------------------- store.cpp ----------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias
// Created: 03/2/20
// Modified: 02/25/20
// -----------------------------------------------------------------------------
// Purpose: This class defines a singular store, which contains information on
// all available movies and all customers that are borrowing from the store.
// Will parse through input files to populate Movie, Customer, and Transaction
// objects, and then execute all transactions that are created.
// -----------------------------------------------------------------------------
// Assumptions:
//  - All input files will be provided in the following formats:
//      -Movie: genre(string) stock(int) director(string) title(string)
//        In addition, the following movie genre's input will also contain:
//         Comedy: releaseYear(int)
//         Drama: releaseYear(int)
//         Classics: majorActor(string) releaseMonth(int) releaseYear(int)
//      -Customer: customerID#(int) lastName(string) firstName(string)
//      -Transaction: actionType(char)
//        In addition, the following transaction types will also contain:
//         Borrow: customerID#(int) mediaFormat(char) movieData(Formatted above)
//         Return: customerID#(int) mediaFormat(char) movieData(Formatted above)
//         History: customerID#(int)

#include "store.h"

Store::Store(string newName) {
    storeName = newName;
    inventory = InventoryContainer();
    customers = HashTable<Customer>(maxCustomers);
    transactions =  list<Transaction>();
}

Store::~Store() {
    //storeName = NULL;
    //delete inventory;
    //inventory = NULL;
    //delete customers;
    //customers = NULL;
    //delete transactions;
    //transactions =  NULL;
}


void Store::populateInventory(ifstream&) {
    
}


void Store::populateCustomers(ifstream& input) {
    if (!input) {
        cout << "ERROR: customer data could not be read" << endl;
    } else {
        string line;
        while (getline(input, line)) {
            int customerID = line.front();
            Customer* newCustomer = new Customer(line);
            if (newCustomer == NULL) {
                cout << "This customer data is not valid" << endl;
            } else {
                customers.insert(customerID, *newCustomer);
            }
        }
    }
}


void Store::readTransactions(ifstream& input) {
    if (!input) {
        cout << "ERROR: data commands could not be read" << endl;
    } else {
        string line;
        while (getline(input, line)) {
            TransactionFactory transactionHelp;
            Transaction* newTransaction = transactionHelp.createTransaction(line, inventory, customers);
            if (!newTransaction->isValid) {
                cout << "This transaction command is not valid" << endl;
            } else {
                transactions.push_back(*newTransaction);
            }
        }
    }
}


void Store::executeTransactions() {
    
}
