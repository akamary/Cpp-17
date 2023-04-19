#include <vector>
#include <string>
#include "Transaction.h"

class Account
{
private:
	int balance;
	std::vector<Transaction> log;
	int limit;
public:
	Account(); // a constructor for the class
	std::vector<std::string> Report();
	bool Deposit(int amount);
	bool Withdraw(int amount);
	int GetBalance() { return balance; } // declare and return private variable of the class
};