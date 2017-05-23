#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name)
{
    std::cout << "Hi my name is " << this->_name << std::endl;
}

Pony::~Pony(void)
{
    std::cout << this->_name << ": Cheers very one!" << std::endl;
}

Pony Pony::ponyOnTheStack(std::string name)
{
    return Pony(name);
}

Pony * Pony::ponyOnTheHeap(std::string name)
{
    return new Pony(name);
}