#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account {
	friend std::ostream& operator<<(std::ostream& os, const Checking_Account& account);
private:
	static constexpr const char* def_name = "Unnamed Savings Account";
	static constexpr double def_balance = 0.0;
	static constexpr double transaction_fee = 1.5;
protected:
	double int_rate;
public:
	Checking_Account(std::string name = def_name, double balance = def_balance);
	bool withdraw(double);
};

#endif