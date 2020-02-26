// ------------------------------- driver.cpp ----------------------------------
// Enina Bogdani, Rossini Higgins, David Kang, Josiah Zacharias
// Created: 02/25/20
// Modified: 02/25/20
// -----------------------------------------------------------------------------
// Purpose: This code tests the functionality of the movie store program by 
// providing movie, customer, and transaction information through input files.
// -----------------------------------------------------------------------------
// Assumptions:
//  - All input files are formatted as required by their respective object
//    classes

#include "movie/movie.h"
#include "customer/customer.h"
#include "store/store.h"
#include "support/hashtable.h"
#include "transaction/transaction.h"
#include <string>

int main() {
    Store redBox = new Store();
    redBox.populateInventory(data4movies.txt);
    redBox.populateCustomers(data4customers.txt);
    redBox.readTransactions(data4commands.txt);
    redBox.executeTransactions();
    return 0
}