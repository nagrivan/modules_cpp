#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat *bur1;
    Bureaucrat *bur2;
    Bureaucrat *bur3;
    PresidentialPardonForm    *zalupa;
    RobotomyRequestForm    *zalupa2;
    ShrubberyCreationForm   *zalupa3;

    bur1 = new Bureaucrat("Lolik", 5);
    bur2 = new Bureaucrat("Bolik", 2);
    bur3 = new Bureaucrat("Lox", 150);
    zalupa = new PresidentialPardonForm("Complaint");
    zalupa2 = new RobotomyRequestForm("Suspension order");
    zalupa3 = new ShrubberyCreationForm("meanness");

	std::cout << *bur1 << std::endl;
	std::cout << *bur2 << std::endl;
	std::cout << *bur3 << std::endl;

	std::cout << *zalupa << std::endl;
	std::cout << *zalupa2 << std::endl;
	std::cout << *zalupa3 << std::endl;
    
    std::cout << "\nTest 1" << std::endl;
    bur1->executeForm(*zalupa);
    bur2->executeForm(*zalupa2);
    bur3->executeForm(*zalupa3);

	std::cout << *bur1 << std::endl;
	std::cout << *bur2 << std::endl;
	std::cout << *bur3 << std::endl;

	std::cout << *zalupa << std::endl;
	std::cout << *zalupa2 << std::endl;
	std::cout << *zalupa3 << std::endl;

    std::cout << "\nTest 2" << std::endl;
    bur1->signForm(*zalupa);
    bur2->signForm(*zalupa2);
    bur3->signForm(*zalupa3);

    bur1->executeForm(*zalupa);
    bur2->executeForm(*zalupa2);
    bur3->executeForm(*zalupa3);

	std::cout << *bur1 << std::endl;
	std::cout << *bur2 << std::endl;
	std::cout << *bur3 << std::endl;

	std::cout << *zalupa << std::endl;
	std::cout << *zalupa2 << std::endl;
	std::cout << *zalupa3 << std::endl;

    delete bur3;

    std::cout << "\nTest 3" << std::endl;
    Bureaucrat  *bur4;
    bur4 = new Bureaucrat("Ivan Vasilevich", 1);
    bur4->signForm(*zalupa3);
    bur4->executeForm(*zalupa3);

	std::cout << *bur4 << std::endl;
	std::cout << *zalupa3 << std::endl;
    
    delete bur1;
    delete bur2;
    delete bur4;

	delete zalupa;
	delete zalupa2;
	delete zalupa3;

    return (0);
}
