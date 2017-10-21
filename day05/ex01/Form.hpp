#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>


	class Form
	{
	public:

		Form(std::string const & name, int const & _gradeToSignIt, int const & _gradeToExecuteIt);
		Form(Form const &cpy);
		virtual ~Form();

		Form & operator = (Form const &rhs);






	private:

		std::string const  _name;
		int const          _gradeToSignIt;
		int const          _gradeToExecuteIt;
		boolean            _inWork;

	};



	std::ostream & operator << (std::ostream & o, Form const & rhs);

#endif


//TODO

/*
Form::GradeTooHighException and Form::GradeTooLowException.




Same as before, make getters for all attributes, and an overload of the << operator to ostream that completely describes the state of the form.
You will also add a beSigned function that takes a Bureaucrat, and makes the form signed if the bureaucrat’s grade is high enough. Always remember, grade 1 is better than grade 2. If the grade is too low, throw a Form::GradeTooLowException.
Also add a signForm function to the Bureaucrat. If the signing is successful, it will print something like "<bureaucrat> signs <form", otherwise it will print something like "<bureaucrat> cannot sign <form> because <reason>".
Add whatever’s needed to test this to your main.


*/
