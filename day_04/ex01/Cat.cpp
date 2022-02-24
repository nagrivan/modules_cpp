#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	_brain = new Brain;
	_brain->setIdeas("I want a milk!");
	_brain->getIdeas(2);
	std::cout << "Cat was created" << std::endl;
}

Cat::~Cat() {
	if (this->_brain)
		delete this->_brain;
	std::cout << "Cat was destroyed" << std::endl;
}

Cat::Cat(const Cat &copy) {
	this->_type = copy._type;
	if (copy._brain)
		_brain = new Brain;
	_brain->setIdeas("I want a fish!");
	_brain->getIdeas(2);
	*this = copy;
}

Cat&	Cat::operator=(const Cat &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	if (this->_brain)
		delete this->_brain;
	if (copy._brain)
		this->_brain = new Brain(*copy._brain);
	_brain->setIdeas("I want a fish!");
	_brain->getIdeas(2);
	return (*this);
}

void    Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
