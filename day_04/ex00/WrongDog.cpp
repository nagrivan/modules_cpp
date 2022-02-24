#include "WrongDog.hpp"

WrongDog::WrongDog() {
	this->_type = "Dog";
	std::cout << "Dog was created" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "Dog was destroyed" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy) {
	*this = copy;
}

WrongDog& WrongDog::operator=(const WrongDog &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

void    WrongDog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}

std::string WrongDog::getType(void) const {
	return (this->_type);
}
