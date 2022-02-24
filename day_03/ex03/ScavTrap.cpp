#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap <" << this->_name << "> created" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap <" << this->_name << "> destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	std::cout << "Starting Copy constructor" << std::endl;
	*this = copy;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap &copy) {
	std::cout << "Assignment operator overload starting" << std::endl;
	if (this == &copy)
		return (*this);
	*this = copy;
	return (*this);
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap <" << this->_name\
    << "> have enterred in Gate keeper mode"\
    << std::endl;
}

void    ScavTrap::attack(std::string const & target)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "ScavTrap <" << this->_name << "> died! Oops..." << std::endl;
        return ;
    }
    if (this->_energyPoints > 0)
    {
        std::cout << "ScavTrap <" << this->_name << "> attack " << target;
        std::cout << ", causing " << this->_attackDamage << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << "ScavTrap <" << this->_name << "> can't attack. Sorry (no)." << std::endl;
}
