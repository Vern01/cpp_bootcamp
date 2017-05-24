#ifndef CPP_BOOTCAMP_HUMANB_HPP
#define CPP_BOOTCAMP_HUMANB_HPP

class HumanB
{
public:
	HumanB(std::string name);

	void	attack(void);
	void	setWeapon(Weapon& weapon);

private:
	std::string		_name;
	Weapon&			_weapon;
};

#endif