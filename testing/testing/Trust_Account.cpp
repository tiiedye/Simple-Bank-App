#include <iostream>
#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	: Account{ name, balance }, int_rate{ int_rate }, num_withdrawals{ 0 } {
}

bool Trust_Account::deposit(double amount) {
	amount += amount * (int_rate / 100);
	return Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent)) {
		return false;
	} else {
		++num_withdrawals;
		return true;
	}
}

std::ostream& operator<<(std::ostream& os, const Trust_Account& account) {
	os << "[ Savings Account: " << account.name << " : " << account.balance << ", " << account.int_rate << "% ]";
	return os;
}