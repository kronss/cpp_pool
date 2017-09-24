//
// Created by kron on 23.09.17.
//

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	_fpv = 0;

	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) // copy constructor
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fpv = obj.getRawBits();
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpv = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpv;
}

void Fixed::setRawBits(int const raw)
{
	this->_fpv = raw;
}