#include "Form.hpp"

Form::Form() : _name("No name"), _gradeSign(150), _gradeExecute(150) {

}

Form::Form( const std::string name, const int sign, const int execute)
    : _name(name), _signed(false),
    _gradeSign(sign), _gradeExecute(execute) {
    if (sign < 1 || execute < 1)
        throw Form::GradeTooHighException();
    if (sign > 150 || execute > 150)
        throw Form::GradeTooLowException();
    std::cout << this->_name << " was created!" << std::endl;
}

Form::Form(Form const &copy) 
    : _name(copy._name), _signed(copy._signed),
    _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute) {
    std::cout << "Copy constructor was actived!" << std::endl;
}

Form& Form::operator= (const Form &copy) {
    if (this == &copy)
        return (*this);
    this->_signed = copy._signed;
    return (*this);
}

Form::~Form() {
    std::cout << this->_name << " was destroyed!" << std::endl;
}

std::string   Form::getName(void) const {
    return (this->_name);
}

int Form::getGradeSign(void) const {
    return (this->_gradeSign);
}

int Form::getGradeExecute(void) const {
    return (this->_gradeExecute);
}

bool    Form::getSigned(void) const {
    return (this->_signed);
}

void    Form::beSigned( const Bureaucrat &persone ) {
    if (persone.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

const char  *Form::GradeTooHighException::what() const throw() {
    return ("Grade too High!");
}

const char  *Form::GradeTooLowException::what() const throw() {
    return ("Grade too Low!");
}

const char  *Form::FormNotSigned::what() const throw() {
    return ("Form was not signed!");
}

const char  *Form::ErrorExecute::what() const throw() {
    return ("Not enough rights");
}

std::ostream & operator<< (std::ostream &ostream, Form const &other) {
    ostream << other.getName() << " | " << other.getGradeSign()\
    << " | " << other.getGradeExecute() << " | " << other.getSigned() << std::endl;
	return (ostream);
}
