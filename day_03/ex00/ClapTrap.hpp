#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
	ClapTrap();
public:
    ClapTrap(std::string name);
    ClapTrap( const ClapTrap &clap );
    ~ClapTrap();

    ClapTrap& operator= ( const ClapTrap &clap );

    std::string getName(void);

    int getAttackDamage(void);

    void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif