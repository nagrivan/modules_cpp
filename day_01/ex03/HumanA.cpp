#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_WeaponType): name(_name),
    WeaponType(_WeaponType) {

}

HumanA::~HumanA() {
	
};

std::string HumanA::getName(void)
{
    return(name);
}

void HumanA::setName(std::string _name)
{
    this->name = _name;
}

void HumanA::attack(void)
{
    std::cout << HumanA::getName() << " attacks with his ";
    std::cout << WeaponType.getType() << std::endl;
}
