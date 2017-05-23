#include "ZombieEvent.hpp"

void    randomChump(ZombieEvent e)
{
    std::string names[3] = {"Sir Farts A Lot", "Pie", "Trouble"};

    Zombie* zombie = e.newZombie(names[(std::rand() % 3)]);

    zombie->announce();
    delete zombie;
}

int     main(void)
{
    std::srand(time(NULL));
    ZombieEvent e = ZombieEvent();
    e.setZombieType("Blob");
    randomChump(e);
    e.setZombieType("Jumper");
    randomChump(e);
    return 0;
}