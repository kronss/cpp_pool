//
// Created by kron on 24.09.17.
//

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	int _fpv;
	static const int _nfb = 8;

public:
	Fixed();

	Fixed(int a);
	Fixed(float a);

	Fixed(const Fixed &obj);

	~Fixed();
	Fixed &operator=(Fixed const & rhs);


	float	toFloat( void ) const;
	int 	toInt( void ) const;

	int	getRawBits(void) const ;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif //FIXED_CLASS_HPP
