/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:33:58 by nagrivan          #+#    #+#             */
/*   Updated: 2021/12/01 17:52:25 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie *newZombak = new Zombie;
	return (newZombak);
}
