#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts		 = 0;
int Account::_totalAmount		 = 0;
int Account::_totalNbDeposits	 = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
	std::time_t time = std::time(NULL);
	std::tm	   *tm	 = std::localtime(&time);
	std::cout << '[' << 1900 + tm->tm_year << std::setfill('0') << std::setw(2)
			  << tm->tm_mon + 1 << std::setw(2) << tm->tm_mday << '_'
			  << std::setw(2) << tm->tm_hour << std::setw(2) << tm->tm_min
			  << std::setw(2) << tm->tm_sec << ']';
}

void Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';' << "p_amount:" << _amount
			  << ';' << "deposit:" << deposit << ';'
			  << "amount:" << _amount + deposit << ';'
			  << "nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

int Account::checkAmount() const
{
	return (_amount);
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal > checkAmount())
		return (std::cout << " index:" << _accountIndex << ';'
						  << "p_amount:" << _amount << ';'
						  << "withdrawal:" << "refused" << std::endl,
				false);
	_nbWithdrawals++;
	std::cout << " index:" << _accountIndex << ';' << "p_amount:" << _amount
			  << ';' << "withdrawal:" << withdrawal << ';'
			  << "amount:" << _amount - withdrawal << ';'
			  << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ';'
			  << "total:" << getTotalAmount() << ';'
			  << "deposits:" << getNbDeposits() << ';'
			  << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';' << "amount:" << _amount
			  << ';' << "deposits:" << _nbDeposits << ';'
			  << "withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex  = _nbAccounts;
	_amount		   = initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits	   = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';' << "amount:" << _amount
			  << ';' << "created" << std::endl;
	_nbAccounts++;
	_totalAmount += _amount;
	_totalNbDeposits += _nbDeposits;
	_totalNbWithdrawals += _nbWithdrawals;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';' << "amount:" << _amount
			  << ';' << "closed" << std::endl;
}
