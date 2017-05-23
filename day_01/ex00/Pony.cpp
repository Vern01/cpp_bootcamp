#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name)
{
    std::cout << "Hi my name is " << this->_name << " and I am a pony" << std::endl;
}

Pony::~Pony(void)
{
    std::cout << this->_name << ": Cheers very one!" << std::endl;
}