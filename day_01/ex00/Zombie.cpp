/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:33:55 by nagrivan          #+#    #+#             */
/*   Updated: 2022/01/28 15:15:03 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getNameZombie(void)
{
	return (this->_name);
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << ": was born!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": destroyed!" << std::endl;
}
