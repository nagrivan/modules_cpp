/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:32:36 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/26 15:52:28 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

int	main()
{
	std::string command = "\0";
	ClassPhoneBook phoneBook;

	while (42)
	{
		std::cout << "Please, imput command: [ADD], [SEARCH], [EXIT]"\
			<< std::endl;
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
			std::cout << "\nI know only 3 commands: [ADD], [SEARCH], [EXIT]!\n"\
				<< std::endl;
	}
	return (0);
}