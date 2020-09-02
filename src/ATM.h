#ifndef ATM_H
#define ATM_H

#include <cassert>
#include <iostream>
#include <string>
#include <set>
#include "Bank.h"

class ATM
{
public:
	ATM(Bank & b): bank(b) {};
	virtual ~ATM();	
	
	void insertCard    (int a);	
	bool enterPin      (int p);
	void selectAccount (std::string a);
	

	
private:
	Bank &  bank;
	int 	accountNumber;
	int 	pin;

	std::set<std::string> validAccounts {"Savings", "Checking"};
	std::string account 				{""};

};


#endif