#ifndef CPP_BOOTCAMP_ZOMBIEHORDE_HPP
# define CPP_BOOTCAMP_ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
public:
    ZombieHorde(int n);
    ~ZombieHorde(void);

    void    announce(void);
private:
    int     _n;
    Zombie* _z;
};

#endif
