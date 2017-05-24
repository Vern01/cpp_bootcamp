#ifndef CPP_BOOTCAMP_HUMAN_HPP
# define CPP_BOOTCAMP_HUMAN_HPP
# include "Brain.hpp"

class   Human
{
public:
    static std::string  identify();
    static Brain    getBrain();

private:
    static Brain const _brain;
};

#endif