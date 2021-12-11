/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:34:01 by nagrivan          #+#    #+#             */
/*   Updated: 2021/12/01 17:49:26 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	// newZombik->announce(name);
	Zombie zombie = Zombie(name);
	zombie.announce();
}
