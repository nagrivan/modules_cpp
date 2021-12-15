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
	Zombie zombak;
	zombak.newZombie("Trololo");
	
	std::cout << "Zombie <" << zombak.getNameZombie() << "> is destroyed!" << std::endl;
	delete [] ;
	return (0);
}
