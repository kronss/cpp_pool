#include "Bureaucrat.hpp"

// Bureaucrat::GradeTooHighException
Bureaucrat::GradeTooHighException::GradeTooHighException()
{

}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const & cpy)
{
    *this = cpy;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{

}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
    if (this != &rhs)
    {
       *this = rhs;
    }
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too High";
}


// Bureaucrat::GradeTooLowException
Bureaucrat::GradeTooLowException::GradeTooLowException()
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & cpy)
{
    *this = cpy;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{

}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
    if (this != &rhs)
    {
       *this = rhs;
    }
    return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too Low";
}


// Bureaucrat
Bureaucrat::Bureaucrat(const std::string & name, const int & grade)
try : _name(name) , _grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        std::cout << "Bureaucrat born" << std::endl;
} 
catch (std::exception & e)
{
    std::cout << e.what() << std::endl;
}


Bureaucrat::~Bureaucrat()
{
	std::cout << "~Bureaucrat died" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
: _name(copy._name),
_grade(copy._grade)
{
	std::cout << "Bureaucrat copy" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		// this->_name(rhs._name);
		this->_grade = rhs._grade;
	}
	return *this;
}

void        Bureaucrat::incrementGrade() try
{
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade -= 1;
}
catch (std::exception & e)
{
    std::cout << e.what() << std::endl;
}

void        Bureaucrat::decrementGrade() try
{
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade += 1;
}
catch (std::exception & e)
{
    std::cout << e.what() << std::endl;
}

std::string  Bureaucrat::getName() const
{
    return _name;
}

int          Bureaucrat::getGrade() const
{
    return _grade;
}



std::ostream & operator << (std::ostream & o, const Bureaucrat & rhs)
{
	std::cout << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">.";
	return o;
}
