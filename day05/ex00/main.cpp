#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat obj("dick", 120);
    std::cout << obj << std::endl;

    Bureaucrat obj2 = obj;
    std::cout << obj2 << std::endl;

    Bureaucrat obj0("dick", 150);

    Bureaucrat obj3 = obj0;
    std::cout << obj3 << std::endl;
    obj3.decrementGrade();

    return 0;
}
