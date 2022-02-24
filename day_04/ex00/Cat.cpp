#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Cat was created" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat was destroyed" << std::endl;
}

Cat::Cat(const Cat &copy) {
	*this = copy;
}

Cat&	Cat::operator=(const Cat &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

void    Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
