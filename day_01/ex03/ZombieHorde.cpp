#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n)
{
    this->_z = new Zombie[_n];

    std::srand(time(NULL));
    std::string names[3] = {"Sir Farts A Lot", "Pie", "Trouble"};
    for (int index = 0; index < this->_n; index++)
    {
        this->_z[index].setVars(names[(std::rand() % 3)], "Horder");
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_z;
}

void    ZombieHorde::announce()
{
    for(int index = 0; index < this->_n; index++)
    {
        this->_z[index].announce();
    }
}