#ifndef PRESIDENTIAL_PARDON_FROM_HPP
# define PRESIDENTIAL_PARDON_FROM_HPP

# include <iostream>

# include "Form.hpp"


    class PresidentialPardonForm : public Form
    {
    public:
        PresidentialPardonForm(std::string const & name);
        PresidentialPardonForm(PresidentialPardonForm const & cpy);
        ~PresidentialPardonForm();

        PresidentialPardonForm & operator = (PresidentialPardonForm const & rhs);


        void  execute(Bureaucrat const & executor) const;

        void tellUsPardone() const;

    private:
        enum gradeToPresidentialPardonForm
        {
            SIGN_GRADE = 25,
            EXEC_GRADE = 5
        };
    };

#endif
