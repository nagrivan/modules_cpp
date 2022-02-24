#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm& operator= (const RobotomyRequestForm &copy);
    virtual ~RobotomyRequestForm();

    void    Execute(Bureaucrat const & executor) const;

    class Failure : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

#endif