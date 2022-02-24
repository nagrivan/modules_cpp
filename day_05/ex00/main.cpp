#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *bur1 = new Bureaucrat("Lolik", 5);
	Bureaucrat *bur2 = new Bureaucrat ("Bolik", 2);
	Bureaucrat *bur3 = new Bureaucrat("Trolik", 149);

    try {
        
		Bureaucrat *bur4 = new Bureaucrat("Error", 0);
        Bureaucrat *bur5 = new Bureaucrat("ErroR", 151);

		std::cout << *bur1 << std::endl;
		std::cout << *bur2 << std::endl;
		std::cout << *bur3 << std::endl;

		std::cout << bur4 << std::endl;
		std::cout << bur5 << std::endl;

        std::cout << "\nTest 1" << std::endl;
        bur1->incremGrade();
        bur2->incremGrade();
        bur3->incremGrade();
        std::cout << "\nTest 2" << std::endl;
        bur1->decremGrade();
        bur2->decremGrade();
        bur3->decremGrade();
        std::cout << "\nTest 3" << std::endl;
        bur2->incremGrade();
        // bur2->incremGrade();
        std::cout << "\nTest 4" << std::endl;
        bur3->decremGrade();
        // bur3->decremGrade();

		std::cout << *bur1 << std::endl;
		std::cout << *bur2 << std::endl;
		std::cout << *bur3 << std::endl;
		
		// delete bur4;
		// delete bur5;
    }
    catch (std::exception const &e) {
        std::cerr << e.what() << std::endl;
    }
	delete bur1;
	delete bur2;
	delete bur3;

    return (0);
}
