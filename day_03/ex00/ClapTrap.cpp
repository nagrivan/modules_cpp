#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {

}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << this->_name << " was generated!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &clap ) {
	std::cout << "Starting Copy constructor" << std::endl;
	*this = clap;
}

ClapTrap::~ClapTrap() {
        std::cout << this->_name << " was destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator= ( const ClapTrap &clap ) {
	std::cout << "Assignment operator overload starting" << std::endl;
	if (this == &clap)
		return (*this);
	*this = clap;
	return (*this);
}

std::string ClapTrap::getName(void) {
	return (this->_name);
}

int ClapTrap::getAttackDamage(void) {
	return (this->_attackDamage);
};

void    ClapTrap::attack(std::string const & target)
{
	if (this->_hitPoints <= 0)
    {
        std::cout << this->_name << " died! Oops..." << std::endl;
        return ;
    }
	if (this->_energyPoints > 0)
    {
        std::cout << this->_name << " attack " << target;
        std::cout << ", causing " << this->_attackDamage << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << this->_name << " can't attack. Sorry (no)." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " already dead, stay away!" << std::endl;
		return ;
	}
    std::cout << this->_name << " take damage this " << amount << std::endl;
    this->_hitPoints -= amount;
    if (this->_hitPoints <= 0)
    {
        std::cout << this->_name << " died! Oops..." << std::endl;
        this->_hitPoints = 0;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		std::cout << this->_name << " repaired this " << amount << std::endl;
		this->_hitPoints += (int)amount;
		this->_energyPoints--;
    	std::cout << this->_name << "'s hit points is: " << this->_hitPoints << std::endl;
	}
	else
		std::cout << this->_name << " can't repair. Sorry (no)." << std::endl;
}
