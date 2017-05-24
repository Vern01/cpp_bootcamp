#include "Human.hpp"

std::string  Human::identify()
{
    return _brain.getInstance()->identify();
}

Brain        Human::getBrain()
{
    return *_brain.getInstance();
}