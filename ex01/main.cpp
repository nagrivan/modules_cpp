/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:32:36 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/25 14:48:49 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

int	main()
{
	std::string command = "\0";
	ClassPhoneBook phoneBook;

	while (42)
	{
		std::cout << "Please, imput command: [ADD], [SEARCH], [EXIT]" << std::endl;
		// std::cin >> command;
		// std::cin.ignore(32767, '\n');
		std::getline(std::cin, command);
		if (command == "EXIT")
		{
			std::cout << "Bye, bye!" << std::endl;
			return (0);
		}
		else if (command == "ADD")
			phoneBook.AddContact();
		else if (command == "SEARCH")
			phoneBook.SearchContact();
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}