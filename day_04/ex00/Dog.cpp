#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Dog was created" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog was destroyed" << std::endl;
}

Dog::Dog(const Dog &copy) {
	*this = copy;
}

Dog& Dog::operator=(const Dog &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

void    Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}
