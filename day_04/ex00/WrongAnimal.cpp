#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "Animal <" << this->_type << "> created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Animal <" << this->_type << "> destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

void    WrongAnimal::makeSound(void) const{
	std::cout << "???" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return (this->_type);
}
