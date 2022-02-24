#include "FragTrap.hpp"

FragTrap::FragTrap() {

}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap <" << this->_name << "> created" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap <" << this->_name << "> destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {
	std::cout << "Starting Copy constructor" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &copy) {
	std::cout << "Assignment operator overload starting" << std::endl;
	if (this == &copy)
		return (*this);
	*this = copy;
	return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap <" << this->_name\
    << "> positive high fives request"\
    << std::endl;
}

void    FragTrap::attack(std::string const & target)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "FragTrap <" << this->_name << "> died! Oops..." << std::endl;
        return ;
    }
    if (this->_energyPoints > 0)
    {
        std::cout << "FragTrap <" << this->_name << "> attack " << target;
        std::cout << ", causing " << this->_attackDamage << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << "FragTrap <" << this->_name << "> can't attack. Sorry (no)." << std::endl;
}
