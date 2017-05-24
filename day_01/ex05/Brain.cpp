#include "Brain.hpp"

Brain::Brain() {}

Brain*              Brain::getInstance()
{
    static Brain    brain;

    return &brain;
}

std::string const   Brain::identify()
{
    Brain   b;

    std::stringstream s;
    s << std::hex << (long int) b.getInstance();

    return "0x" + (s.str());
}