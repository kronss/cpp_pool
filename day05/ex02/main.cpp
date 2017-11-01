#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


#include <iomanip>

int main(void)
{
	std::cout << "_____Form_____" << std::endl;
	{
		Bureaucrat b1 = Bureaucrat("The Bureaucrat 1", 50);
		Bureaucrat b2 = Bureaucrat("The Bureaucrat 2", 10);

		ShrubberyCreationForm f1 = ShrubberyCreationForm("Form 1");
		RobotomyRequestForm f2 = RobotomyRequestForm("Form 2");
		// ShrubberyCreationForm f3 = ShrubberyCreationForm("Form 3");




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



		try 
		{
			b2.signForm(f2);
			f2.execute(b2);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}







		
		// std::cout << b1 << std::endl;
		// std::cout << f1 << std::endl;
		// std::cout << std::endl;

		// b1.signForm(f2);
		// std::cout << b1 << std::endl;
		// std::cout << f2 << std::endl;
		// std::cout << std::endl;

		// b2.signForm(f1);
		// std::cout << b2 << std::endl;
		// std::cout << f1 << std::endl;
		// std::cout << std::endl;

		// b2.signForm(f2);
		// std::cout << b2 << std::endl;
		// std::cout << f2 << std::endl;

		// b2.signForm(f3);
		// std::cout << b2 << std::endl;
		// std::cout << f3 << std::endl;

		// b1.signForm(f3);
		// std::cout << b1 << std::endl;
		// std::cout << f3 << std::endl;


	}
	return (0);
}
