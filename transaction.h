#ifndef CSS343_ASG4_TRANSACTION_H
#define CSS343_ASG4_TRANSACTION_H
//------------------------------------------- transaction.h ------------------------------------------------------------
// Team GNUgat: Johnathan Hewit, Adam Sirkis, Jenny Troyan
// Author: Jenny Troyan CSS 343 C
// Creation: 03-07-2019
// Modified: 03-07-2019
//----------------------------------------------------------------------------------------------------------------------
// Purpose: Class to represent transaction object. Superclass for Borrow and Return classes.
//----------------------------------------------------------------------------------------------------------------------
// Notes: Contains two virtual functions that must be overwritten in subclass.
//----------------------------------------------------------------------------------------------------------------------
#include "merchandise.h"
using namespace std;

class Transaction
{
		public:
				Transaction(Merchandise *, const char &);
				~Transaction ();
				void display() const;
		private:
				char type;
				Merchandise *merchandise;
};


#endif //CSS343_ASG4_TRANSACTION_H


