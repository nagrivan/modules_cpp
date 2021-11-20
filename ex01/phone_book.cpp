/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:32:36 by nagrivan          #+#    #+#             */
/*   Updated: 2021/11/20 15:58:22 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int	main()
{
	std::string command = "\0";

	while (42)
	{
		std::cout << "Please, imput command: [ADD], [SEARCH], [EXIT]" << std::endl;
		std::cin >> command;
		if (command == "EXIT")
		{
			std::cout << "Bye, bye!" << std::endl;
			return (0);
		}
		else if (command == "ADD")
		{
			std::cout << "Let's imput a new contact!" << std::endl;
		}
		else if (command == "SEARCH")
		{
			std::cout << "Wait, please..." << std::endl;
		}
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}