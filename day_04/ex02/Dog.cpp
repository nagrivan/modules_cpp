#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	_brain = new Brain;
	_brain->setIdeas("I want a meat!");
	_brain->getIdeas(2);
	std::cout << "Dog was created" << std::endl;
}

Dog::~Dog() {
	if (this->_brain)
		delete this->_brain;
	std::cout << "Dog was destroyed" << std::endl;
}

Dog::Dog(const Dog &copy) {
	this->_type = copy._type;
	if (copy._brain)
		_brain = new Brain;
	_brain->setIdeas("I want to play!");
	_brain->getIdeas(2);
	*this = copy;
}

Dog& Dog::operator=(const Dog &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	if (this->_brain)
		delete this->_brain;
	if (copy._brain)
		this->_brain = new Brain(*copy._brain);
	_brain->setIdeas("I want to play!");
	_brain->getIdeas(2);
	return (*this);
}

void    Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}
