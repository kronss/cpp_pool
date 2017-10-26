#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & name)
: Form(name, 145, 137)
{
    std::cout << "ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "~ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy)
: Form(cpy)
{

}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const & rhs)
{
    if (this == &rhs)
    {
        Form::operator = (rhs);

        // _name;
        // _gradeToSignIt;
        // _gradeToExecuteIt;
        // _isDone = rhs._isDone;
    }
    return *this;
}



void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    bool isSigned = this->getIsSigned();
    bool CanIExecute = executor.getGrade() < getGradeToExecute();


    if (isSigned && CanIExecute)
    {
        std::string nameFile = "<" + this->getName() + ">" + "_shrubbery"; 

        std::ofstream file(nameFile);

        if (!file)
        {
            std::cerr << nameFile << "could not be opened for writing!" << std::endl;
            exit(1);
        }
        file << "@---@---@" << std::endl;
        file << "    |    " << std::endl;
        file << "    |    " << std::endl;
        file << "    |    " << std::endl;
    }
    else
        throw exeption;
}
