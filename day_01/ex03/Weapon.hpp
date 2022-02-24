#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string _type);
    Weapon(const Weapon &weapon);
    ~Weapon();
    const std::string &getType(void) const;
    void setType(std::string _type);
};


#endif