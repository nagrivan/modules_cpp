#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain was created" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain was destroyed" << std::endl;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
}

Brain& Brain::operator=(const Brain &copy) {
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

void    Brain::setIdeas(std::string newIdeas) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = newIdeas;
}

void Brain::getIdeas(int number) {
	for (int i = 0; i < number && i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}
