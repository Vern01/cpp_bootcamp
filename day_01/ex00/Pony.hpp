#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony
{
public:
    Pony(std::string);
    ~Pony(void);

    Pony ponyOnTheStack(std::string);
    Pony * ponyOnTheHeap(std::string);

private:
    std::string _name;
};

#endif
