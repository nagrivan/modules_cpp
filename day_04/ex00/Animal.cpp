#include "Animal.hpp"

Animal::Animal() {

}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal <" << this->_type << "> created" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal <" << this->_type << "> destroyed" << std::endl;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
}

Animal&	Animal::operator=(const Animal &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "???" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->_type);
}
