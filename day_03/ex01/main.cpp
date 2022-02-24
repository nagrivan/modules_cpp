#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap x("Ololo");
    ClapTrap y("Lol");
    ScavTrap z("Trololo");

    std::cout << "\nScene 0\n" << std::endl;

    y.attack(x.getName());
    x.takeDamage(y.getAttackDamage());

    x.attack(y.getName());
    y.takeDamage(x.getAttackDamage());

    z.guardGate();
    z.attack(x.getName());
    x.takeDamage(z.getAttackDamage());

    z.attack(y.getName());
    y.takeDamage(z.getAttackDamage());

	

    std::cout << "\nScene 1\n" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        x.attack(z.getName());
        z.takeDamage(1);
        z.attack(x.getName());
        x.takeDamage(z.getAttackDamage());
    }

    std::cout << "\nScene 2\n" << std::endl;
    x.beRepaired(100);
    y.beRepaired(50);
    z.beRepaired(10);

    return (0);
}
