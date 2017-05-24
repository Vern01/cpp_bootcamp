#ifndef CPP_BOOTCAMP_HUMANA_HPP
#define CPP_BOOTCAMP_HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon);

	void	attack(void);

private:
	std::string		_name;
	Weapon&			_weapon;
};

#endif
