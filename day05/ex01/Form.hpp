#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>


#include "Bureaucrat.hpp"

class Bureaucrat;

	class Form
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



		Form(std::string const & name, int const & gradeToSignIt, int const & gradeToExecuteIt);
		Form(Form const &cpy);
		virtual ~Form();

		Form & operator = (Form const &rhs);






		void         beSigned(Bureaucrat const & bureaucrat);

// SETTER
		void         setIsDone(bool status);


// GETTER ******************
		std::string  getName() const;
		int          getGradeToSign() const;		
		int          getGradeToExecute() const;		
		bool         getIsDone() const;		


	private:

		std::string const  _name;
		int const          _gradeToSignIt;
		int const          _gradeToExecuteIt;
		bool               _isDone;

	};



	std::ostream & operator << (std::ostream & o, Form const & rhs);

#endif
