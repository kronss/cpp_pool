#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"


#include <iomanip>

int main(void)
{
	std::cout << "_____Form_____" << std::endl;
	{
		Bureaucrat b1 = Bureaucrat("The Bureaucrat 1", 144);
		// Bureaucrat b2 = Bureaucrat("The Bureaucrat 2", 10);

		ShrubberyCreationForm f1 = ShrubberyCreationForm("Form 1");
		// ShrubberyCreationForm f2 = ShrubberyCreationForm("Form 2");
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
