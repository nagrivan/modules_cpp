/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:18:24 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/23 18:47:07 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

void	contact::setFirstName(std::string newFirstName)
{
	this->firstName = newFirstName;
}

void	contact::setLastName(std::string newLastName)
{
	this->lastName = newLastName;
}

void	contact::setNickname(std::string newNickname)
{
	this->nickname = newNickname;
}

void	contact::setPhoneNumber(std::string newPhoneNumber)
{
	this->phoneNumber = newPhoneNumber;
}

void	contact::setDarkestSecret(std::string newDarkestSecret)
{
	this->darkestSecret = newDarkestSecret;
}

std::string	contact::getFirstName(void)
{
	return (this->firstName);
}

std::string	contact::getLastName(void)
{
	return (this->lastName);
}

std::string	contact::getNickname(void)
{
	return (this->nickname);
}

std::string	contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string	contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}
