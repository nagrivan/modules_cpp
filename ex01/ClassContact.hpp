/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:51:46 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/26 15:44:53 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

#include <string>

class Contact
{
private:
	std::string 	firstName;
	std::string 	lastName;
	std::string 	nickname;
	std::string 	phoneNumber;
	std::string 	darkestSecret;
	int				indexContact;

public:
	Contact()
		: firstName("\0"), lastName("\0"), nickname("\0"), phoneNumber("\0")
		, darkestSecret("\0"), indexContact(0) {}
	~Contact() {}
	void			setFirstName(std::string newFirstName);
	void			setLastName(std::string newLastName);
	void			setNickname(std::string newNickname);
	void			setPhoneNumber(std::string newPhoneNumber);
	void			setDarkestSecret(std::string newDarkestSecret);
	void			setIndexContact(int index);
	std::string		getFirstName(void);
	std::string		getLastName(void);
	std::string		getNickname(void);
	std::string		getPhoneNumber(void);
	std::string		getDarkestSecret(void);
	int				getIndexContact(void);
};

#endif