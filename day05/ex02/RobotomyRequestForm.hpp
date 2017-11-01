#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include <fstream>

# include "Form.hpp"


    class RobotomyRequestForm : public Form
    {
    public:
        RobotomyRequestForm(std::string const & name);
        RobotomyRequestForm(RobotomyRequestForm const & cpy);
        ~RobotomyRequestForm();

        RobotomyRequestForm & operator = (RobotomyRequestForm const & rhs);


        void  execute(Bureaucrat const & executor) const;
        void  tryToRobotomiz() const;
        void  robotomizedSuccess() const;
        void  robotomizedFailure() const;

    private:
        enum gradeToRobotomyRequestForm
        {
            SIGN_GRADE = 72,
            EXEC_GRADE = 45
        };

	};

#endif
