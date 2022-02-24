#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
    ScavTrap(std::string name);
    ~ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap&	operator= (const ScavTrap &copy);

    void    guardGate(void);
    void    attack(std::string const &target);
};

#endif