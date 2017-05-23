#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void    Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")> Tummy Huuunggrry!!" << std::endl;
}

void Zombie::setVars(std::string name, std::string type)
{
    _name = name;
    _type = type;
}