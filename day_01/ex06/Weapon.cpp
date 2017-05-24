#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

std::string const	Weapon::getType()
{
    return this->_type;
}

void 				Weapon::setType(std::string type)
{
    this->_type = type;
}