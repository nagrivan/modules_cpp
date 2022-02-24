#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap x("Ololo");
    ClapTrap y("Lol");
    ClapTrap z("Trololo");

    std::cout << "Scene 0" << std::endl;
    y.attack(x.getName());
    x.takeDamage(y.getAttackDamage());

    x.attack(y.getName());
    y.takeDamage(x.getAttackDamage());

    z.attack(x.getName());
    x.takeDamage(z.getAttackDamage());

    z.attack(y.getName());
    y.takeDamage(z.getAttackDamage());

    std::cout << "Scene 1" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        y.attack(z.getName());
        z.takeDamage(1);
        x.attack(z.getName());
        z.takeDamage(1);
    }

    std::cout << "Scene 2" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        y.attack(x.getName());
        x.takeDamage(1);

        x.attack(y.getName());
        y.takeDamage(1);
    }

    std::cout << "Scene 3" << std::endl;
    x.beRepaired(100);
    y.beRepaired(50);
    z.beRepaired(10);

    return (0);
}
