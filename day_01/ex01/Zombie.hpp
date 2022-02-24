/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:33:21 by nagrivan          #+#    #+#             */
/*   Updated: 2022/01/28 15:26:06 by nagrivan         ###   ########.fr       */
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
	Zombie(std::string name = "name");
	~Zombie();
	void	announce(void);
	std::string getNameZombie(void);
	void setNameZombie(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif