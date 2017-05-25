#include "Fixed.class.hpp"

Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _fixed(roundf(n*pow(2, this->_fraction)))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int			Fixed::getRawBits()	const
{
	std::cout << "getRawBits called" << std::endl;
	return this->_fixed;
}

int 		Fixed::getFixed()	const
{
	return this->_fixed;
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();

	return *this;
}

std::ostream &		operator << (std::ostream & o, Fixed const & i)
{
	o << "The value of _fixed is : " << i.getFixed();

	return o;
}