/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:33:55 by nagrivan          #+#    #+#             */
/*   Updated: 2021/12/15 12:51:32 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << this->NameZombie << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getNameZombie(void)
{
	return (this->NameZombie);
}
