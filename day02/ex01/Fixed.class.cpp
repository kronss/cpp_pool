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
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
//	setRawBits(obj.getRawBits());
//	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
//	this->setRawBits(rhs.getRawBits());
    this->_fpv = rhs.getRawBits();
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
	return _fpv;
}

void Fixed::setRawBits(int const raw)
{
    _fpv = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}
