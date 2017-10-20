#include "Bureaucrat.hpp"




const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too Low";
}







Bureaucrat::Bureaucrat(const std::string & name, const int & grade) : _name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
		_grade = grade;

	std::cout << "Bureaucrat" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "~Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
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
