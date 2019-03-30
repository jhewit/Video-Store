#ifndef CSS343_ASG4_CUSTOMER_H
#define CSS343_ASG4_CUSTOMER_H
//------------------------------------------- Customer.h -------------------------------------------------------------
// Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
// Author: Jenny Troyan CSS 343 C
// Creation: 03-07-2019
// Modified: 03-07-2019
//----------------------------------------------------------------------------------------------------------------------
// Purpose: Class to represent customer object.
//----------------------------------------------------------------------------------------------------------------------
// Notes: Stores all transaction in a vector.
//----------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include "transaction.h"
using namespace std;

class Customer
{
				friend ostream &operator<<(ostream &, const Customer &);
		private:
				int id;
				string firstName;
				string lastName;
				vector<Transaction *> transactionHistory;

		public:
				Customer(int, string, string);
				Customer();
				~Customer();
				string getName() const;
				int getID() const;
				void displayHistory() const;
				void addTransaction(Transaction *);
				void deleteUtil();
};

#endif //CSS343_ASG4_CUSTOMER_H
