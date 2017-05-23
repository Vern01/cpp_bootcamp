#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony
{
public:
    Pony(std::string);
    ~Pony(void);

private:
    std::string _name;
};

#endif
