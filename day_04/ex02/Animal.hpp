#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"

class Animal
{
protected:
    std::string _type;
public:
	Animal();
    Animal(std::string type);
    virtual ~Animal();
    
    Animal(const Animal &copy);
    Animal& operator=(const Animal &copy);

    virtual void    makeSound(void) const = 0;
    std::string getType(void) const;
};

#endif