#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm( const ShrubberyCreationForm &copy );
    ShrubberyCreationForm& operator= ( const ShrubberyCreationForm &copy );

    void    Execute(Bureaucrat const & executor) const;
};

#endif