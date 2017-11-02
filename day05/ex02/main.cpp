#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


#include <iomanip>

int main(void)
{
	std::cout << "_____Form_____" << std::endl;
	{
		Bureaucrat b1 = Bureaucrat("The Bureaucrat 1", 50);
		Bureaucrat b2 = Bureaucrat("The Bureaucrat 2", 10);
		Bureaucrat b3 = Bureaucrat("The Bureaucrat 3", 4);

		ShrubberyCreationForm f1 = ShrubberyCreationForm("Form 1");
		RobotomyRequestForm f2 = RobotomyRequestForm("Form 2");
		PresidentialPardonForm f3 = PresidentialPardonForm("Form 3");




		std::cout << std::setfill('-') << std::setw(55) << "" << std::endl;


		try 
		{
			b1.signForm(f1);
			f1.execute(b1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::setfill('-') << std::setw(55) << "" << std::endl;

		try 
		{
			b2.signForm(f2);
			f2.execute(b2);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::setfill('-') << std::setw(55) << "" << std::endl;

		try 
		{
			b3.signForm(f3);
			f3.execute(b3);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}



	}
	return (0);
}
