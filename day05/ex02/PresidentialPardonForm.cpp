#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & name)
: Form(name, SIGN_GRADE, EXEC_GRADE)
{
    std::cout << "PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "~PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy)
: Form(cpy)
{

}

PresidentialPardonForm & PresidentialPardonForm::operator = (PresidentialPardonForm const & rhs)
{
    if (this == &rhs)
    {
        Form::operator = (rhs);
    }
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    bool isSigned = this->getIsSigned();
    bool CanIExecute = executor.executeForm(*this);

    if (isSigned && CanIExecute)
    {
        tellUsPardone();
    }
    else
        throw Form::GradeTooLowException();
}

inline void PresidentialPardonForm::tellUsPardone() const
{
    std::cout << "Tells us <" << getName()
              << "> has been pardoned by Zafod Beeblebrox."
              << std::endl;
}
