#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    this->name = _name;
}

HumanB::~HumanB() {
	
}

std::string HumanB::getName(void)
{
    return(name);
}

void HumanB::setName(std::string _name)
{
    this->name = _name;
}

void HumanB::setWeapon(Weapon &_WeaponType)
{
    this->WeaponType = &_WeaponType;
}

void HumanB::attack(void)
{
    std::cout << HumanB::getName() << " attacks with his ";
    std::cout << WeaponType->getType() << std::endl;
}
