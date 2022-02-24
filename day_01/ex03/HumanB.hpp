#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *WeaponType;
public:
    HumanB(std::string _name);
    ~HumanB();
    std::string getName(void);
    void setName(std::string _name);
    void setWeapon(Weapon &_WeaponType);
    void attack(void);
};

#endif