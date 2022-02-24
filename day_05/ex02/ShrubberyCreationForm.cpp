#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {
    std::cout << "Shrubbery <" << this->_name << "> was created!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ) 
    : Form(copy) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= ( const ShrubberyCreationForm &copy ) {
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Shrubbery <" << this->_name << "> was destroyed!" << std::endl;
}

void    ShrubberyCreationForm::Execute(Bureaucrat const & executor) const {
    if (this->_signed == false)
        throw Form::FormNotSigned();
    if (executor.getGrade() > this->_gradeExecute)
        throw Form::ErrorExecute();
    std::string fileName = this->_name + "_shrubbery";
    std::ofstream outfile(fileName);
    if (!outfile.good())
        return ;
    outfile << "           |/ |    |/\n"\
            << "         / / |||/  /_/___/_\n"\
            << "         |/   |/  /\n"\
            << "    ____/_|   |  /_____/_\n"\
            << "          |   | /          /\n"\
            << "  __ _-----`  |{,-----------~\n"\
            << "            | }{\n"\
            << "             }{{\n"\
            << "             }}{\n"\
            << "             {{}\n"\
            << "       , -=-~{ .-^- _\n"\
            << "             `}\n"\
            << "              {" << std::endl;
    outfile.close();
}
