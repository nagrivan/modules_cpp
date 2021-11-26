/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:11:14 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/26 16:38:37 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

/* Вспомогательные функции можно засунуть в приватные, основные в публичное */

void	ClassPhoneBook::AddContact()
{
	std::string EnterStr;

	std::cout << "\nLet's imput a new contact!\n" << std::endl;

	std::cout << "Enter First Name: ";
	if (!std::getline(std::cin, EnterStr))
	{
		std::cout << "Invalide Enter." << std::endl;
		exit(1);
	}
	this->PhoneBook[this->indexNext].setFirstName(EnterStr);

	std::cout << "Enter Last Name: ";
	if (!std::getline(std::cin, EnterStr))
	{
		std::cout << "Invalide Enter." << std::endl;
		exit(1);
	}
	this->PhoneBook[this->indexNext].setLastName(EnterStr);

	std::cout << "Enter Nickname: ";
	if (!std::getline(std::cin, EnterStr))
	{
		std::cout << "Invalide Enter." << std::endl;
		exit(1);
	}
	this->PhoneBook[this->indexNext].setNickname(EnterStr);

	std::cout << "Enter Phone Number: ";
	if (!std::getline(std::cin, EnterStr))
	{
		std::cout << "Invalide Enter." << std::endl;
		exit(1);
	}
	this->PhoneBook[this->indexNext].setPhoneNumber(EnterStr);

	std::cout << "Enter Darkest Secret: ";
	if (!std::getline(std::cin, EnterStr))
	{
		std::cout << "Invalide Enter." << std::endl;
		exit(1);
	}
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

void	ClassPhoneBook::SearchContact()
{
	std::string	EnterIndex = "\0";
	int	index = -1;

	/* Проверка на наличие контактов (попробовать через статическую переменную,
		которая увеличивается в каждом вызове конструктора */
	if (this->PhoneBook[0].getIndexContact() <= 0)
	{
		std::cout << "\n******* NULL CONTACT *******\n" << std::endl;
		return ;
	}
	/* Вывод списка контактов */
	for (int i = 0; i < 55; i++)
		std::cout << "-";
	std::cout << "\n";
	std::cout << "|" << std::setw(10) << "|"\
	<< std::setw(10) << "  index  " << "|"\
	<< std::setw(10) << "first name" << "|"\
	<< std::setw(10) << " last name" << "|"\
	<< std::setw(10) << " nickname " << "|" << std::endl;
	for (int i = 0; i < 55; i++)
		std::cout << "-";
	std::cout << "\n";

	for (int i = 0; i < 8 && this->PhoneBook[i].getIndexContact() > 0; i++)
	{
		std::cout << "|" << std::setw(10) << "|"\
		<< std::setw(10) << this->PhoneBook[i].getIndexContact() << "|"\
		<< std::setw(10) << this->TrimStr(PhoneBook[i].getFirstName()) << "|"\
		<< std::setw(10) << this->TrimStr(PhoneBook[i].getLastName()) << "|"\
		<< std::setw(10) << this->TrimStr(PhoneBook[i].getNickname()) << "|"\
		<< std::endl;
		for (int i = 0; i < 55; i++)
			std::cout << "-";
		std::cout << "\n";
	}
	
	/* Получение индекса */
	std::cout << "\nEnter index contact from 1 to 8: ";
	if (!std::getline(std::cin, EnterIndex))
	{
		std::cout << "Invalide Enter." << std::endl;
		exit(1);
	}
	if (EnterIndex.length() == 1)
		index = EnterIndex[0] - '0';
	else
	{
		std::cout << "\nI said 'Enter index contact from 1 to 8'!\n" << std::endl;
		return ;	
	}
	
	std::cout << "\nWait, please...\n" << std::endl;

	/* вывод соответствующей информации */
	if (this->PhoneBook[index - 1].getIndexContact() <= 0)
	{
		std::cout << "\n******* ERROR 404 *******\n" << std::endl;
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
