#include "ATM.h"


ATM::~ATM()
{

}

void ATM::insertCard(int a)
{
	accountNumber = a;
}	

bool ATM::enterPin(int p)
{
	pin = p;
	return bank.valid(p);
}

void ATM::selectAccount(std::string a)
{
	if (validAccounts.find(a) != validAccounts.end())
	{
		account = a;
	} else {std::cout << "Invalid Account Entered";}

}

