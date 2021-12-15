/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:51:30 by nagrivan          #+#    #+#             */
/*   Updated: 2021/12/15 17:27:36 by nagrivan         ###   ########.fr       */
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
}

Account::Account(int initial_deposit)
{
	this->_totalNbDeposits = initial_deposit;

	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = this->_totalNbWithdrawals;
	this->_nbDeposits = 0;
	
	std::clog << "index:" << this->_accountIndex << ";";
	std::clog << "amount:" << this->_amount << ";";
	std::clog << "created" << std::endl;
}

Account::~Account(void)
{
	std::clog << "index:" << this->_accountIndex << ";";
	std::clog << "amount:" << this->_amount << ";";
	std::clog << "closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
}

bool Account::makeWithdrawal(int withdrawal)
{}

int Account::checkAmount(void) const
{}

void	Account::displayStatus(void) const
{}

void	Account::_displayTimestamp(void)
{
}
