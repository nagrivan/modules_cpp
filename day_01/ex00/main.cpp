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
	Zombie zombak0("Ololo");
	Zombie *zombak1 = newZombie("Trololo");
	randomChump("Loh");

	zombak0.announce();
	zombak1->announce();
	std::cout << "Let's to destroy every zombies" << std::endl;
	delete zombak1;
	return (0);
}
