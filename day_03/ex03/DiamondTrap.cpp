#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap <" << this->_name << "> created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap <" << this->_name << "> destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) {
	std::cout << "Starting Copy constructor" << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy) {
	std::cout << "Assignment operator overload starting" << std::endl;
	if (this == &copy)
		return (*this);
	*this = copy;
	return (*this);
}

void    DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "It's DiamondTrap, his name is <"\
    << this->_name << ">, and his ClapTrap name is <"\
    << ClapTrap::_name << std::endl;
}
