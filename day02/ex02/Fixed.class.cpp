//
// Created by kron on 25.09.17.
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
	if (this != &rhs)
	{
		std::cout << "Assignation operator called" << std::endl;
		//	this->setRawBits(rhs.getRawBits());
		this->_fpv = rhs.getRawBits();
	}
	return *this;
}



Fixed Fixed::operator + (Fixed const &rhs) const
{
//	return Fixed(this->_fpv + rhs._fpv);
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator - (Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator * (Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator / (Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator > (Fixed const &rhs) const
{
	return (this->_fpv > rhs._fpv);
}

bool Fixed::operator >= (Fixed const &rhs) const
{
	return (this->_fpv >= rhs._fpv);
}

bool Fixed::operator < (Fixed const &rhs) const
{
	return (this->_fpv < rhs._fpv);
}

bool Fixed::operator <= (Fixed const &rhs) const
{
	return (this->_fpv <= rhs._fpv);
}

bool Fixed::operator == (Fixed const &rhs) const
{
	return (this->_fpv == rhs._fpv);
}

bool Fixed::operator != (Fixed const &rhs) const
{
	return (this->_fpv != rhs._fpv);
}

Fixed &Fixed::operator ++ ()
{
	++(this->_fpv);
	return *this;
}

Fixed &Fixed::operator -- ()
{
	++(this->_fpv);
	return *this;
}

Fixed Fixed::operator ++ (int)
{
	Fixed	tmp;

	tmp = *this;
	++(this->_fpv);
	return tmp;
}

Fixed Fixed::operator -- (int)
{
	Fixed	res;

	res = *this;
	--(this->_fpv);
	return res;
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


Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	else
		return b;
//
//	if (a.toFloat() > b.toFloat())
//		return a;
//	else
//		return b;
}

Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	else
		return b;
//	if (a.toFloat() < b.toFloat())
//		return a;
//	else
//		return b;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
