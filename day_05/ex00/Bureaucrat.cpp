#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
    : _name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
    std::cout << this->_name << " was created!" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy ) {
    *this = copy;
}

Bureaucrat& Bureaucrat::operator= ( Bureaucrat const &copy ) {
    if (this == &copy)
            return (*this);
    this->_grade = copy._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {
    // std::cout << this->_name << " was destroyed!" << std::endl;
}

std::string Bureaucrat::getName(void) const {
    return (this->_name);
};

int Bureaucrat::getGrade(void) const {
    return(this->_grade);
};

void    Bureaucrat::incremGrade(void) {
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
    std::cout << this->_name << "'s grade = " << this->_grade << std::endl;
}

void    Bureaucrat::decremGrade(void) {
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
    std::cout << this->_name << "'s grade = " << this->_grade << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low!");
}

std::ostream & operator<< (std::ostream &ostream, Bureaucrat const &other) {
    ostream << other.getName() << " | " << other.getGrade() << std::endl;
	return (ostream);
}
