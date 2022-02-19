/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:51:30 by nagrivan          #+#    #+#             */
/*   Updated: 2021/12/20 15:09:49 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();

	std::clog << "accounts:" << Account::getNbAccounts() << ";";
	std::clog << "total:" << Account::getTotalAmount() << ";";
	std::clog << "deposits:" << Account::getNbDeposits() << ";";
	std::clog << "withdrawals:" << Account::getNbWithdrawals() << ";";
	std::clog << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = this->_totalNbWithdrawals;
	this->_nbDeposits = 0;
	
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;

	Account::_displayTimestamp();

	std::clog << "index:" << this->_accountIndex << ";";
	std::clog << "amount:" << this->_amount << ";";
	std::clog << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();

	std::clog << "index:" << this->_accountIndex << ";";
	std::clog << "amount:" << this->_amount << ";";
	std::clog << "closed" << std::endl;

	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();

	std::clog << "index:" << this->_accountIndex << ";";
	std::clog << "p_amount:" << this->_amount << ";";
	std::clog << "deposit:" << deposit << ";";

	this->_amount += deposit;
	this->_nbDeposits++;

	std::clog << "amount:" << this->_amount << ";";
	std::clog << "nb_deposits:" << this->_nbDeposits << ";";
	std::clog << std::endl;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();

	std::clog << "index:" << this->_accountIndex << ";";
	std::clog << "p_amount:" << this->_amount << ";";

	if (withdrawal > this->_amount)
	{
		std::clog << "withdrawal:refused" << std::endl;
		return (false);
	}

	std::clog << "withdrawal:" << withdrawal << ";";

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	std::clog << "amount:" << this->_amount << ";";
	std::clog << "nb_withdrawals:" << this->_nbWithdrawals << ";";
	std::clog << std::endl;

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return (true);
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();

	std::clog << "index:" << this->_accountIndex << ";";
	std::clog << "amount:" << this->_amount << ";";
	std::clog << "deposits:" << this->_nbDeposits << ";";
	std::clog << "withdrawals:" << this->_nbWithdrawals << ";";
	std::clog << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	now = time(0);
	tm *localTime = localtime(&now);

	std::clog << "[" << 1900 + localTime->tm_year;
	std::clog << std::setfill('0') << std::setw(2) << 1 + localTime->tm_mon;
	std::clog << std::setfill('0') << std::setw(2) << localTime->tm_mday;
	std::clog << "_";
	std::clog << std::setfill('0') << std::setw(2) << 1 + localTime->tm_hour;
	std::clog << std::setfill('0') << std::setw(2) << 1 + localTime->tm_min;
	std::clog << std::setfill('0') << std::setw(2) << 1 + localTime->tm_sec;
	std::clog << "] ";
}
