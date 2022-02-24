#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap x("Ololoshka");
    ScavTrap y("Lol");
    FragTrap z("Trololo");
    DiamondTrap a("Ololo");

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

    a.whoAmI();
    a.attack(x.getName());
    x.takeDamage(a.getAttackDamage());
    a.attack(y.getName());
    y.takeDamage(a.getAttackDamage());
    a.attack(z.getName());
    z.takeDamage(a.getAttackDamage());

    std::cout << "\nScene 1\n" << std::endl;
    y.beRepaired(50);
    z.beRepaired(50);
    for (int i = 0; i < 3; i++)
    {
        y.attack(a.getName());
        a.takeDamage(y.getAttackDamage());
        z.attack(a.getName());
        a.takeDamage(z.getAttackDamage());
    }

    std::cout << "\nScene 2\n" << std::endl;
    x.beRepaired(100);
    y.beRepaired(50);
    z.beRepaired(10);
    a.beRepaired(28);

    return (0);
}
