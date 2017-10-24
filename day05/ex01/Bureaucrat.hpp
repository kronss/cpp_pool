#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

	class Bureaucrat
	{
	public:

		class GradeTooHighException : public std::exception
		{
		public:
			GradeTooHighException();
			GradeTooHighException(GradeTooHighException const & src);
			virtual ~GradeTooHighException() throw();
			GradeTooHighException & operator=(GradeTooHighException const & rhs);

			virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		public:
			GradeTooLowException();
			GradeTooLowException(GradeTooLowException const & cpy);
			virtual ~GradeTooLowException() throw();
			GradeTooLowException & operator = (GradeTooLowException const & rhs);

			virtual const char * what() const throw();
		};

		Bureaucrat(const std::string & name, const int & grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat & obj);
		Bureaucrat & operator = (const Bureaucrat & rhs);

		void         signForm(Form & form);

		void         incrementGrade();
		void         decrementGrade();

// GETTER ******************
		std::string  getName() const;
		int          getGrade() const;

	private:

		const std::string _name;
		int               _grade;
	};

std::ostream & operator << (std::ostream & o, const Bureaucrat & rhs);

#endif
