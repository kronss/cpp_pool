#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
	int _fpv;
	static const int _nfb;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &obj);
	Fixed &operator=(Fixed const & rhs);




	int	getRawBits(void) const ;
	void setRawBits(int const raw);
};


#endif //FIXED_CLASS_HPP
