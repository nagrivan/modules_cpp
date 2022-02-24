#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {
    std::cout << "Robot <" << this->_name << "> was created!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
: Form(copy) {}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm &copy) {
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Robot <" << this->_name << "> was destroyed!" << std::endl;
}

void    RobotomyRequestForm::Execute(Bureaucrat const & executor) const {
    if (this->_signed == false)
        throw Form::FormNotSigned();
    if (executor.getGrade() > this->_gradeExecute)
        throw Form::ErrorExecute();
    std::cout << "Drr-drr-drr!" << std::endl;
    srand(time(0));
    if (rand() % 2)
        throw RobotomyRequestForm::Failure();
    std::cout << executor.getName() << " has been robotomized successfully!" << std::endl;
}

const char *RobotomyRequestForm::Failure::what() const throw() {
    return ("It's a failure!");
}
