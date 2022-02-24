#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
	DiamondTrap();
    DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap& operator=(const DiamondTrap &copy);
    ~DiamondTrap();

    void    attack(std::string const &target);
    void    whoAmI(void);
};

#endif