#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern someRandomIntern;
    Form    *rrf;
    Form    *ppf;
    Form    *scf;
    Form    *ololo;

	Bureaucrat *boss = new Bureaucrat("BOSS", 1);

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    ppf = someRandomIntern.makeForm("president pardon", "Ivan Ivanovich");
    scf = someRandomIntern.makeForm( "shrubbery creation", "Fucking tree" );
    ololo = someRandomIntern.makeForm("trolling", "Oops");

	boss->signForm(*rrf);
	boss->executeForm(*ppf);
    
    delete rrf;
    delete ppf;
    delete scf;

	delete boss;

    return (0);
}
