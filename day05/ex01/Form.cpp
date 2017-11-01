#include "Form.hpp"

// Form::GradeTooHighException
Form::GradeTooHighException::GradeTooHighException()
{

}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const & cpy)
{
    *this = cpy;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{

}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
    if (this != &rhs)
    {
       *this = rhs;
    }
    return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade too High";
}

// Form::GradeTooLowException
Form::GradeTooLowException::GradeTooLowException()
{

}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const & cpy)
{
    *this = cpy;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{

}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
    if (this != &rhs)
    {
       *this = rhs;
    }
    return *this;
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade too Low";
}



// FORM *********************
Form::Form(std::string const & name, int const & gradeToSignIt, int const & gradeToExecuteIt)
: _name(name),
_gradeToSignIt(gradeToSignIt),
_gradeToExecuteIt(gradeToExecuteIt),
_isDone(false)
{
    std::cout << "Form created" << std::endl;
}

Form::Form(Form const &cpy)
: _name(cpy._name), _gradeToSignIt(cpy._gradeToSignIt), _gradeToExecuteIt(cpy._gradeToExecuteIt)
{
    std::cout << "copy Form created" << std::endl;
}

Form::~Form()
{
    std::cout << "Form was burned in fire" << std::endl;
}

Form & Form::operator = (Form const & rhs)
{
    if (this != &rhs)
    {
        // _name;
        // _gradeToSignIt;
        // _gradeToExecuteIt;
        _isDone = rhs._isDone;
    }
    return *this;
}

void         Form::beSigned(Bureaucrat const & bureaucrat)
{
    if (getIsDone())
        return ;

    if (bureaucrat.getGrade() > _gradeToSignIt)
        throw Form::GradeTooLowException();

    setIsDone(true);
}


// SETTER ******************
void         Form::setIsDone(bool status)
{
    _isDone = status;
}


// GETTER ******************
std::string  Form::getName() const
{
    return _name;
}

int          Form::getGradeToSign() const
{
    return _gradeToSignIt;
}

int          Form::getGradeToExecute() const
{
    return _gradeToExecuteIt;
}

bool         Form::getIsDone() const
{
    return _isDone;
}

// OSTREAM ********************
std::ostream & operator << (std::ostream & o, Form const & rhs)
{
    o << "Name: " << rhs.getName() << " Grade Sign: " << rhs.getGradeToSign()
    << " Grade Execute: " << rhs.getGradeToExecute() << " Signed: " << std::boolalpha << rhs.getIsDone();
    return o;
}
