#ifndef CPP_BOOTCAMP_FIXED_CLASS_HPP
#define CPP_BOOTCAMP_FIXED_CLASS_HPP
#include <iostream>
#include <cmath>

class	Fixed
{
public:
	Fixed(void);
	Fixed(int const	n);
	Fixed(float const n);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &			operator=(Fixed const & rhs);
	int				getRawBits(void) const;
	int				getFixed(void) const;
	int				toInt(void) const;
	float			toFloat(void) const;

private:
	int					_fixed;
	static int const	_fraction = 8;
};

std::ostream &		operator << (std::ostream & o, Fixed const & i);

#endif
