#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat *bur1 = new Bureaucrat("Lolik", 5);
	Bureaucrat *bur2 = new Bureaucrat ("Bolik", 2);
	Form    *zalupa = new Form("Complaint", 10, 5);
	Form    *zalupa2 = new Form("Suspension order", 1, 1);
    try {
		// Form    *zalupa3 = new Form("Suspension order", -1, 151);

		std::cout << *bur1 << std::endl;
		std::cout << *bur2 << std::endl;

		std::cout << *zalupa << std::endl;
		std::cout << *zalupa2 << std::endl;

        std::cout << "\nTest 1" << std::endl;
        bur1->incremGrade();
        bur2->incremGrade();

        bur1->signForm(*zalupa);
        bur2->signForm(*zalupa);
        bur1->signForm(*zalupa2);
        bur2->signForm(*zalupa2);

		std::cout << *bur1 << std::endl;
		std::cout << *bur2 << std::endl;

		std::cout << *zalupa << std::endl;
		std::cout << *zalupa2 << std::endl;
        
        std::cout << "\nTest 2" << std::endl;
        bur1->decremGrade();
        bur2->decremGrade();
        bur1->signForm(*zalupa2);
        bur2->signForm(*zalupa2);

		std::cout << *bur1 << std::endl;
		std::cout << *bur2 << std::endl;

		std::cout << *zalupa << std::endl;
		std::cout << *zalupa2 << std::endl;

		// delete zalupa3;
    }
    catch (std::exception const &e) {
        std::cerr << e.what() << std::endl;
    }

	delete bur1;
	delete bur2;
	delete zalupa;
	delete zalupa2;

    return (0);
}
