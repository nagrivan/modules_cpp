#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &copy);
    PresidentialPardonForm& operator=(PresidentialPardonForm const &copy);
    virtual ~PresidentialPardonForm();

    void    Execute(Bureaucrat const & executor) const;
};

#endif