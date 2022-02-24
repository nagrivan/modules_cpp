#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form(target, 25, 5) {
    std::cout << "Target <" << this->_name << "> was created!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
: Form(copy) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &copy) {
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Target <" << this->_name << "> was destroyed!" << std::endl;
}

void    PresidentialPardonForm::Execute(Bureaucrat const & executor) const {
    if (this->_signed == false)
        throw Form::FormNotSigned();
    if (executor.getGrade() > this->_gradeExecute)
        throw Form::ErrorExecute();
    std::cout << "<" << this->_name << ">  has been pardoned by Zafod Beeblebrox." << std::endl;
}
