#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
	try
	{
		Bureaucrat obj("dick", 120);
		std::cout << obj.getName() << obj.getGrade()<< std::endl;

		Bureaucrat obj2 = obj;
		std::cout << obj2.getName() << obj2.getGrade()<< std::endl;

		Bureaucrat obj0("dick", 150);	

		Bureaucrat obj3 = obj0;
		std::cout << obj3.getName() << obj3.getGrade()<< std::endl;
		obj3.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
