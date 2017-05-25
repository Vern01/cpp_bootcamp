#include "Fixed.class.hpp"

Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _fixed(roundf(n*pow(2, this->_fraction)))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) : _fixed(roundf(n*pow(2, this->_fraction)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
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
	return this->_fixed;
}

int 		Fixed::getFixed()	const
{
	return this->_fixed;
}

int			Fixed::toInt() const
{
	return this->_fixed / pow(2, this->_fraction);
}

float		Fixed::toFloat() const
{
	return (float)((float)this->_fixed / pow(2, this->_fraction));
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
	o << i.toFloat();
	return o;
}