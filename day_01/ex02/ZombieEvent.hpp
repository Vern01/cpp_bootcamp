#ifndef CPP_BOOTCAMP_ZOMBIEHEADER_HPP
# define CPP_BOOTCAMP_ZOMBIEHEADER_HPP
# include "Zombie.hpp"

class ZombieEvent
{
public:
    void        setZombieType(std::string);
    Zombie*     newZombie(std::string name);

private:
    std::string _type;
};

#endif
