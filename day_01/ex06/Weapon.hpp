#ifndef CPP_BOOTCAMP_WEAPON_HPP
#define CPP_BOOTCAMP_WEAPON_HPP
#include <iostream>

class   Weapon
{
public:
    void                setType(void);
    std::string& const  getType(void);
private:
    std::string         _type;
};

#endif