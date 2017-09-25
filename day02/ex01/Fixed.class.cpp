//
// Created by kron on 24.09.17.
//

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int a)
{
	setRawBits(a << _nfb);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float a)
{

	setRawBits((int)roundf(a * (1 << _nfb)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) // copy constructor
{
	this->setRawBits(obj.getRawBits());
//	this->_fpv = obj.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return *this;
}

float Fixed::toFloat() const
{
	return (float)(_fpv) / (1 << _nfb);
}

int		Fixed::toInt() const
{
	return _fpv >> _nfb;
}




int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpv;
}

void Fixed::setRawBits(int const raw)
{
	this->_fpv = raw;
}