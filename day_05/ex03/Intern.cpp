#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern was created!" << std::endl;
}

Intern::Intern( const Intern &copy ) {
    *this = copy;
}

Intern::~Intern() {
    std::cout << "Intern was destroyed!" << std::endl;
}

Intern& Intern::operator=( const Intern &copy ) {
    if (this == &copy)
        return (*this);
    *this = copy;
    return (*this);
}

Form *Intern::_Shrubbery(std::string &target) {
    std::cout << "Intern creates <" << target << ">" << std::endl;
    return (new ShrubberyCreationForm(target));
}

Form *Intern::_Robotomy(std::string &target) {
    std::cout << "Intern creates <" << target << ">" << std::endl;
    return (new RobotomyRequestForm(target));
}

Form *Intern::_Pardons(std::string &target) {
    std::cout << "Intern creates <" << target << ">" << std::endl;
    return (new PresidentialPardonForm(target));
}

Form *Intern::_Default(std::string &target) {
    std::cout << "<" << target << "> was not created! Unknown form!" << std::endl;
    return ((Form *)0);
}

Form    *Intern::makeForm(std::string nameForm, std::string target) {
    int indexForm = 0;
    const std::string   NameForm[4] =
        {"robotomy request", "president pardon", "shrubbery creation"};
    Form *Forms = NULL;

    while (indexForm < 4 && NameForm[indexForm] != nameForm)
        indexForm++;

    switch (indexForm)
    {
    case 0:
        Forms = Intern::_Robotomy(target);
        break;
    case 1:
        Forms = Intern::_Pardons(target);
        break;
    case 2:
        Forms = Intern::_Shrubbery(target);
        break;
    default:
		Forms = Intern::_Default(target);
        break;
    }
    return (Forms);
}
