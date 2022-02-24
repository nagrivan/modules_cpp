#ifndef FORM_HPP
# define FORM_HPP

// class Form;
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
protected:
    const std::string _name;
    bool    _signed;
    const int _gradeSign;
    const int _gradeExecute;
    Form();
public:
    Form( const std::string name, const int sign, const int execute);
    virtual ~Form();
    Form(const Form &copy);
    Form& operator=(const Form &copy);

    std::string   getName(void) const;
    int getGradeSign(void) const;
    int getGradeExecute(void) const;
    bool    getSigned(void) const;
    void    beSigned( const Bureaucrat &persone );

    virtual void    Execute(Bureaucrat const & executor) const = 0;

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

    class FormNotSigned : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class ErrorExecute : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream & operator<< (std::ostream &ostream, Form const &other);

#endif