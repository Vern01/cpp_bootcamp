#ifndef CPP_BOOTCAMP_ZOMBIE_HPP
# define CPP_BOOTCAMP_ZOMBIE_HPP
# include <iostream>

class Zombie
{
public:
    Zombie(std::string name, std::string type);
    ~Zombie(void);

    void    announce(void);

private:
    std::string _name;
    std::string _type;
};

#endif
