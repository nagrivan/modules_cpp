/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:11:14 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/24 18:01:04 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

void	ClassPhoneBook::AddContact()
{
	std::string EnterStr = '\0';

	std::cout << "Let's imput a new contact!" << std::endl;

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

	this->indexContact = indexNext;
	if (this->indexNext == 7)
		this->indexNext = 0;
	else
		this->indexNext++;
}

void	ClassPhoneBook::SearchContact()
{
	std::string	EnterIndex = '\0';
	int	index = -1;

	/* Вывод списка контактов */
	for (int i = 0; i < 41; i++)
		std::cout << "-";
	std::cout << "|" << std::setw(10) << "|"\
	<< std::setw(10) << "  index  " << "|"\
	<< std::setw(10) << "first name" << "|"\
	<< std::setw(10) << " last name" << "|"\
	<< std::setw(10) << " nickname " << "|" << std::endl;
	for (int i = 0; i < 41; i++)
		std::cout << "-";
	
	
	/* Получение индекса */
	std::cout << "Enter index contact from 0 to 7: ";
	if (!std::getline(std::cin, EnterIndex))
	{
		std::cout << "Invalide Enter." << std::endl;
		exit(1);
	}
	if (EnterIndex.length() == 1)
		index = EnterIndex[0] - '0';
	else
	{
		std::cout << "Invalide Index." << std::endl;
		return ;	
	}
	
	std::cout << "\nWait, please...\n" << std::endl;

	/* вывод соответствующей информации */
	std::cout << "First Name: " << this->PhoneBook[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->PhoneBook[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->PhoneBook[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << this->PhoneBook[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->PhoneBook[index].getDarkestSecret() << std::endl;
}
