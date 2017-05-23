#ifndef CPP_BOOTCAMP_ZOMBIE_HPP
# define CPP_BOOTCAMP_ZOMBIE_HPP
# include <iostream>

class Zombie
{
public:
    Zombie();
    ~Zombie(void);

    void    announce(void);
    void    setVars(std::string name, std::string type);

private:
    std::string _name;
    std::string _type;
};

#endif
