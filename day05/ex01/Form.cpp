#include "Form.hpp"

Form::Form(std::string const & name, int const & gradeToSignIt, int const & gradeToExecuteIt)
: _name(name), _gradeToSignIt(gradeToSignIt), _gradeToExecuteIt(gradeToExecuteIt)
{
	std::cout << "Form created" << std::endl;
}

Form::Form(Form const &cpy)
: _name(cpy._name), _gradeToSignIt(cpy._gradeToSignIt), _gradeToExecuteIt(cpy._gradeToExecuteIt)
{
	std::cout << "copy Form created" << std::endl;
}




//TODO all

