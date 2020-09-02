#ifndef BANK_H
#define BANK_H


//Bank Interface
class Bank
{
	public:

		virtual ~Bank();

		virtual bool deposit (int accountNumber, int amount);
		virtual bool withdraw(int accountNumber, int amount);
		virtual bool valid   (int pin);
		virtual int  balance (int accountNumber);
};	










#endif