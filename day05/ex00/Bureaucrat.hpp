#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>


	class Bureaucrat
	{
	public:
		class GradeTooHighException : public std::exception
		{
		public:
			// GradeTooHighException(void);
			// GradeTooHighException(GradeTooHighException const & src);
			// virtual ~GradeTooHighException(void) throw();

			// GradeTooHighException & operator=(GradeTooHighException const & rhs);

			virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char * what() const throw();
		};






		Bureaucrat(const std::string & name, const int & grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat & obj);
		Bureaucrat & operator = (const Bureaucrat & rhs);














		void         increment();
		void         decrement();

// GETER ******************
		std::string  getName() const;
		int          getGrade() const;

	private:
		const std::string _name;
		int               _grade;
	};

std::ostream & operator << (std::ostream & o, const Bureaucrat & rhs);

#endif
