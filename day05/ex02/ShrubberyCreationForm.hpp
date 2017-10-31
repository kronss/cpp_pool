#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP
        
# include <iostream>
# include <fstream>

# include "Form.hpp"    

enum gradeToShrubberyCreationForm
{
	SIGN = 145,
	EXEC = 137
};

    class ShrubberyCreationForm : public Form
    {
    public:
        ShrubberyCreationForm(std::string const & name);
        ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm & operator = (ShrubberyCreationForm const & rhs);

        void execute(Bureaucrat const & executor) const;
	};

#endif
