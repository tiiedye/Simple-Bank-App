#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a vector of Account objects
void display(const std::vector<Account>& accounts) {
	for (const auto& acc : accounts) {
		std::cout << acc << std::endl;
	}
}

void deposit(std::vector<Account>& accounts) {
	std::cout << "\n======== Depositing to Accounts ========" << std::endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount)) {
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		} else {
			std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
		}
	}
}

void withdraw(std::vector<Account>& accounts, double amount) {
	std::cout << "\n======== Withdrawing from Accounts ========" << std::endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount)) {
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		} else {
			std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
		}
	}
}

#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a vector of Account objects
void display(const std::vector<Savings_Account>& accounts) {
	for (const auto& acc : accounts) {
		std::cout << acc << std::endl;
	}
}

void deposit(std::vector<Savings_Account>& accounts) {
	std::cout << "\n===== Depositing to Savings Accounts =====" << std::endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount)) {
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		}
		else {
			std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
		}
	}
}

void withdraw(std::vector<Savings_Account>& accounts, double amount) {
	std::cout << "\n===== Withdrawing from Savings Accounts =====" << std::endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount)) {
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		}
		else {
			std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
		}
	}
}

