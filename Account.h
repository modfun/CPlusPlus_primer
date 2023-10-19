#ifndef ACCOUNT_T
#define ACCOUNT_T

#include <iostream>
#include <string>
#include <cstddef>

typedef class Account Account;

/**
 * Account -
 * @owner:
 * @amount:
 *
 * Description:
 */
class Account
{
	private:
		std::string owner;
		double amount;
		static double interestRate;
		static constexpr int period = 30;
		double daily_tbl[period];
	public:
		std::string class_type("Account");

	private:
		static double initRate();
	public:
		void calculate() { amount += amount * interestRate;}
		static double rate() { return (interestRate);}
		static void rate(double);

		Account() = default;
		Account(std::string name, double balance = 0.0):
			owner(name), amount(balance)
		{
			std::cout << "[Created] " << class_type << std::endl;
		}
}

/* static data */
double Account::interestRate = initRate();
constexpr int Account::period;

/* member functions */
void Account::rate(double r)
{
	Account::interestRate = r;
}

#endif
