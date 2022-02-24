#include "Span.hpp"

Span::Span() {

}

Span::Span(unsigned int N) : _size(N) {
    this->_trash.resize(0);
    std::cout << "Vector was created! It's size: " << this->_size << std::endl;
}

Span::~Span() {
    std::cout << "Vector, whis size is: " << this->_size << " going to trash!\n\tBadum ts-s-s..." << std::endl;
}

Span::Span(const Span &copy) {
    *this = copy;
}

Span&   Span::operator=(const Span &copy) {
    if (this == &copy)
        return (*this);
    this->_size = copy._size;
    this->_trash = copy._trash;
    return (*this);
}

const char *Span::WhereDoYouAdd::what() const throw() {
    return ("I will not to add is it! It's very many numbers!");
}

const char  *Span::NullVector::what() const throw() {
    return ("This vector is NULL.");
}

const char  *Span::NotValues::what() const throw() {
    return ("Not enough values.");
}

void    Span::addNumber(int value) {
    if (this->_trash.size() == this->_size)
        throw Span::WhereDoYouAdd();
    this->_trash.push_back(value);
}

int Span::shortestSpan(void) {
	if (this->_trash.empty() == true)
		throw Span::NullVector();
    if (this->_trash.size() <= 1)
		throw Span::NotValues();
	
	std::vector<int> tmp = this->_trash;
	int result = std::abs(tmp[0] - tmp[1]);
	int tmpRes;
	for (int i = 1; tmp[i + 1] != *tmp.end(); i++) {
		tmpRes = std::abs(tmp[i] - tmp[i + 1]);
		result = std::min(result, tmpRes);
	}
	return (result);
}

int Span::longestSpan(void) {
	if (this->_trash.empty() == true)
        throw Span::NullVector();
    if (this->_trash.size() <= 1)
        throw Span::NotValues();

	std::vector<int>::iterator min = std::min_element(this->_trash.begin(), this->_trash.end());
	std::vector<int>::iterator max = std::max_element(this->_trash.begin(), this->_trash.end());
	return (*max - *min);
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    std::vector<int> tmp(start, end);

    if (tmp.size() < (this->_size - this->_trash.size())) {
		this->_trash.assign(start, end);
        std::cout << "Vector, size: " << this->_trash.size() << " was created!" << std::endl;
    }
    else
        std::cout << "Vector, size: " << this->_trash.size() << " was not created!" << std::endl;
}
