#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & name)
: Form(name, SIGN_GRADE, EXEC_GRADE)
{
    std::cout << "RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "~RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy)
: Form(cpy)
{

}

RobotomyRequestForm & RobotomyRequestForm::operator = (RobotomyRequestForm const & rhs)
{
    if (this == &rhs)
    {
        Form::operator = (rhs);
    }
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    bool isSigned = this->getIsSigned();
    bool CanIExecute = executor.executeForm(*this);

    if (isSigned && CanIExecute)
    {
        tryToRobotomiz();
    }
    else
        throw Form::GradeTooLowException();
}

void    RobotomyRequestForm::tryToRobotomiz() const
{
    std::srand(time(NULL));
    bool isrobotomized = rand() % 2;

    if (isrobotomized)
    {
        robotomizedSuccess();
    }
    else
    {
        robotomizedFailure();
    }
}

inline void RobotomyRequestForm::robotomizedSuccess() const
{
    std::cout << "ZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZz" << std::endl;
    std::cout << "<" << getName()
              << "> has been robotomized successfully" << std::endl;
}

inline void RobotomyRequestForm::robotomizedFailure() const
{
    std::cout << "<" << getName()
              << "> has been robotomized FAILURE!!!" << std::endl;
}
