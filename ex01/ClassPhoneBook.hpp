/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:33:45 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/25 15:25:10 by nagrivan         ###   ########.fr       */
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
	Contact		PhoneBook[8];
	int			indexNext;
public:
	void	AddContact();
	void	SearchContact();
};


#endif