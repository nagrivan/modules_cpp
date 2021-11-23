/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:33:45 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/23 19:10:28 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <string>

#include "ClassContact.hpp"


class ClassPhoneBook
{
private:
	int		PhoneBook[8];
	int		indexContact;
public:
	void	AddContact();
	void	SearchContact();
};


#endif