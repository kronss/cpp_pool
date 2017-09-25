#include "Fixed.class.hpp"



int main()
{
	Fixed			a;
	Fixed const		b( Fixed( 5.05f ) *  Fixed( 2 ) );


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << a + b << std:: endl;
	std::cout << a - b << std:: endl;

	return 0;
}
