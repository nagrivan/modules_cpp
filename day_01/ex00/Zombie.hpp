/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:33:21 by nagrivan          #+#    #+#             */
/*   Updated: 2022/01/28 15:14:34 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include "string"
#include "iostream"

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
	std::string getNameZombie(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif