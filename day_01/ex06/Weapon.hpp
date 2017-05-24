#ifndef CPP_BOOTCAMP_WEAPON_HPP
#define CPP_BOOTCAMP_WEAPON_HPP
#include <iostream>

class   Weapon
{
public:
	Weapon(std::string type);

    void				setType(std::string type);
    std::string const	getType(void);
private:
    std::string         _type;
};

#endif