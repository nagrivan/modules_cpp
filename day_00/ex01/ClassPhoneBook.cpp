/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:11:14 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/30 14:42:37 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

std::string	ClassPhoneBook::Enter(void)
{
	std::string	ResEnter = "\0";
	if (!std::getline(std::cin, ResEnter))
	{
		std::cout << "Invalide Enter." << std::endl;
		exit(1);
	}
	return (ResEnter);
}

void	ClassPhoneBook::AddContact()
{
	std::string EnterStr;

	std::cout << "\nLet's imput a new contact!\n" << std::endl;

	std::cout << "Enter First Name: ";
	EnterStr = this->Enter();
	this->PhoneBook[this->indexNext].setFirstName(EnterStr);

	std::cout << "Enter Last Name: ";
	EnterStr = this->Enter();
	this->PhoneBook[this->indexNext].setLastName(EnterStr);

	std::cout << "Enter Nickname: ";
	EnterStr = this->Enter();
	this->PhoneBook[this->indexNext].setNickname(EnterStr);

	std::cout << "Enter Phone Number: ";
	EnterStr = this->Enter();
	this->PhoneBook[this->indexNext].setPhoneNumber(EnterStr);

	std::cout << "Enter Darkest Secret: ";
	EnterStr = this->Enter();
	this->PhoneBook[this->indexNext].setDarkestSecret(EnterStr);

	this->PhoneBook[this->indexNext].setIndexContact(this->indexNext);
	if (this->indexNext == 7)
		this->indexNext = 0;
	else
		this->indexNext++;
}

std::string	ClassPhoneBook::TrimStr(std::string str)
{
	std::string	StrResult = str;

	if (str.size() > 10)
		StrResult = StrResult.substr(0, 9).append(".");
	return (StrResult);
}

void	ClassPhoneBook::HorisontLine(void)
{
	for (int i = 0; i < 55; i++)
		std::cout << "-";
	std::cout << "\n";
}

void	ClassPhoneBook::TableHeader(void)
{
	this->HorisontLine();
	std::cout << "|" << std::setw(10) << "|"\
	<< std::setw(10) << "  index  " << "|"\
	<< std::setw(10) << "first name" << "|"\
	<< std::setw(10) << " last name" << "|"\
	<< std::setw(10) << " nickname " << "|" << std::endl;
	this->HorisontLine();
}

void	ClassPhoneBook::TableContact(void)
{
	for (int i = 0; i < 8 && this->PhoneBook[i].getIndexContact() > 0; i++)
	{
		std::cout << "|" << std::setw(10) << "|"\
		<< std::setw(10) << this->PhoneBook[i].getIndexContact() << "|"\
		<< std::setw(10) << this->TrimStr(PhoneBook[i].getFirstName()) << "|"\
		<< std::setw(10) << this->TrimStr(PhoneBook[i].getLastName()) << "|"\
		<< std::setw(10) << this->TrimStr(PhoneBook[i].getNickname()) << "|"\
		<< std::endl;
		this->HorisontLine();
	}
}

int		ClassPhoneBook::GettingIndex(void)
{
	std::string	EnterIndex = "\0";
	int	ResultIndex = -1;
	
	std::cout << "\nEnter index contact from 1 to 8: ";
	EnterIndex = this->Enter();
	if (EnterIndex.length() == 1)
		ResultIndex = EnterIndex[0] - '0';
	if (EnterIndex.length() != 1 || ResultIndex > 8 || ResultIndex < 1)
	{
		std::cout << "\nI said from 1 to 8!\n" << std::endl;
		return (-1);
	}
	return (ResultIndex);
}

void	ClassPhoneBook::ResultSearch(int index)
{
	if (this->PhoneBook[index - 1].getIndexContact() <= 0)
	{
		std::cout << "******* ERROR 404 *******" << std::endl;
		std::cout << "Contact whis index '" << index << "' is not found!\n" << std::endl;
	}
	else
	{
		std::cout << "First Name: " << this->PhoneBook[index - 1].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->PhoneBook[index - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << this->PhoneBook[index - 1].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->PhoneBook[index - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->PhoneBook[index - 1].getDarkestSecret() << std::endl;
	}
}

void	ClassPhoneBook::SearchContact()
{
	int	index = -1;

	if (this->PhoneBook[0].getIndexContact() <= 0)
	{
		std::cout << "\n******* NULL CONTACT *******\n" << std::endl;
		return ;
	}
	this->TableHeader();
	this->TableContact();

	index = this->GettingIndex();
	if (index == -1)
		return ;
	std::cout << "\nWait, please...\n" << std::endl;
	this->ResultSearch(index);
}
