#ifndef CPP_BOOTCAMP_BRAIN_HPP
# define CPP_BOOTCAMP_BRAIN_HPP
# include <iostream>
# include <sstream>

class   Brain
{
public:
    static Brain*       getInstance(void);
    std::string const   identify(void);
private:
    Brain();
};

#endif
