#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Form;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
private:
    Form *_Shrubbery(std::string &target);
    Form *_Robotomy(std::string &target);
    Form *_Pardons(std::string &target);
    Form *_Default(std::string &target);
public:
    Intern();
    Intern(const Intern &copy);
    virtual ~Intern();

    Intern& operator=(const Intern &copy);
    Form    *makeForm(std::string nameForm, std::string target);
};

#endif