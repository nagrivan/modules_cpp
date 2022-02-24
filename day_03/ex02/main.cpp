#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap x("Ololo");
    ScavTrap y("Lol");
    FragTrap z("Trololo");

    std::cout << "\nScene 0\n" << std::endl;

    y.guardGate();
    y.attack(x.getName());
    x.takeDamage(y.getAttackDamage());

    x.attack(y.getName());
    y.takeDamage(x.getAttackDamage());

    z.highFivesGuys();
    z.attack(x.getName());
    x.takeDamage(z.getAttackDamage());

    z.attack(y.getName());
    y.takeDamage(z.getAttackDamage());

    std::cout << "\nScene 1\n" << std::endl;
    y.beRepaired(50);
    z.beRepaired(50);
    for (int i = 0; i < 4; i++)
    {
        y.attack(z.getName());
        z.takeDamage(y.getAttackDamage());
        z.attack(y.getName());
        y.takeDamage(z.getAttackDamage());
    }

    std::cout << "\nScene 2\n" << std::endl;
    x.beRepaired(100);
    y.beRepaired(50);
    z.beRepaired(10);

    return (0);
}
