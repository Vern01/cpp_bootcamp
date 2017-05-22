#include "Contacts.class.hpp"

Contacts::Contacts(void)
{
}

Contacts::~Contacts(void)
{
}

std::string     Contacts::getFirstname(void) const
{
    return this->_firstname;
}

void            Contacts::setFirstname(std::string firstname)
{
    _firstname = firstname;
}