/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:33:21 by nagrivan          #+#    #+#             */
/*   Updated: 2021/12/01 17:51:02 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include "string"
#include "iostream"

class Zombie
{
private:
	std::string NameZombie;
public:
	Zombie(std::string name = "name");
	~Zombie();
	void	announce(void);
	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);
};

#endif