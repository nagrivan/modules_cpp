#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->_type = "Cat";
	std::cout << "Cat was created" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Cat was destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
	*this = copy;
}

WrongCat&	WrongCat::operator=(const WrongCat &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}

std::string WrongCat::getType(void) const {
	return (this->_type);
}
