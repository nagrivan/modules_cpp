/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:34:04 by nagrivan          #+#    #+#             */
/*   Updated: 2021/12/15 12:59:08 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int number = 5;
	Zombie *HordeZombies = zombieHorde(number, "Trololo");

	std::cout << "Let's to destroy every zombies" << std::endl;
	delete [] HordeZombies;
	return (0);
}
