#include "Bureaucrat.hpp"




int main(int argc, char const *argv[])
{
	Bureaucrat obj("dick", 100);


	std::cout << obj.getName() << obj.getGrade()<< std::endl;

	Bureaucrat obj2 = obj;
	std::cout << obj2.getName() << obj2.getGrade()<< std::endl;


	Bureaucrat obj0("dick", 50);	


	Bureaucrat obj3 = obj0;
	std::cout << obj3.getName() << obj3.getGrade()<< std::endl;


	return 0;
}




