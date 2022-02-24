#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &WeaponType;
public:
    HumanA(std::string _name, Weapon &_WeaponType);
    ~HumanA();
    std::string getName(void);
    void setName(std::string _name);
    void attack(void);
};

#endif