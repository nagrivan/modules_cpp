#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
    Bureaucrat();
public:
    Bureaucrat(const std::string name, const int grade);
    Bureaucrat( Bureaucrat const &copy );
    virtual ~Bureaucrat();

    Bureaucrat& operator= (Bureaucrat const &copy);

    std::string getName(void) const;
    int getGrade(void) const;
    void    incremGrade(void);
    void    decremGrade(void);
    void    signForm(Form &document) const;
    void    executeForm(Form const & form);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream & operator<< (std::ostream &ostream, Bureaucrat const &other);

#endif