/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:33:45 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/26 15:45:03 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

#include "ClassContact.hpp"


class ClassPhoneBook
{
private:
	int			indexNext;
	Contact		PhoneBook[8];
	std::string	TrimStr(std::string str);

public:
	ClassPhoneBook() : indexNext(0) {}
	~ClassPhoneBook() {}
	void	AddContact();
	void	SearchContact();
};


#endif
