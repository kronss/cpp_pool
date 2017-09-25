//
// Created by kron on 25.09.17.
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
	Fixed &operator = (Fixed const & rhs);

	Fixed &operator ++ ();
	Fixed &operator -- ();
	Fixed operator ++ (int);
	Fixed operator -- (int);



	Fixed operator + (Fixed const & rhs) const;
	Fixed operator - (Fixed const & rhs) const;
	Fixed operator * (Fixed const & rhs) const;
	Fixed operator / (Fixed const & rhs) const;


	bool operator > (Fixed const &rhs) const;
	bool operator >= (Fixed const &rhs) const;
	bool operator <= (Fixed const &rhs) const;
	bool operator < (Fixed const &rhs) const;
	bool operator == (Fixed const &rhs) const;
	bool operator != (Fixed const &rhs) const;





	float	toFloat( void ) const;
	int 	toInt( void ) const;

	int		getRawBits(void) const ;
	void	setRawBits(int const raw);


	static Fixed max(Fixed const &a, Fixed const &b);
	static Fixed min(Fixed const &a, Fixed const &b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif //FIXED_CLASS_HPP
