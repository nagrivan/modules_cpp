/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:18:24 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/25 15:30:19 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

void	Contact::setFirstName(std::string newFirstName)
{
	this->firstName = newFirstName;
}

void	Contact::setLastName(std::string newLastName)
{
	this->lastName = newLastName;
}

void	Contact::setNickname(std::string newNickname)
{
	this->nickname = newNickname;
}

void	Contact::setPhoneNumber(std::string newPhoneNumber)
{
	this->phoneNumber = newPhoneNumber;
}

void	Contact::setDarkestSecret(std::string newDarkestSecret)
{
	this->darkestSecret = newDarkestSecret;
}

void	Contact::setIndexContact(int index)
{
	this->indexContact = index + 1;
}

std::string	Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->lastName);
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

int	Contact::getIndexContact(void)
{
	return (this->indexContact);
}
