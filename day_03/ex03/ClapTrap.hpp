#ifndef CPP_BOOTCAMP_CLAPTRAP_HPP
#define CPP_BOOTCAMP_CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap &		operator=(ClapTrap const & rhs);
	
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	std::string			_name;

protected:
	int					_hitPoints;
	int					_maxHPoints;
	int					_energie;
	int					_maxEPoints;
	unsigned int		_level;
	unsigned int		_melee;
	unsigned int		_ranged;
	unsigned int		_armor;
};

#endif //CPP_BOOTCAMP_CLAPTRAP_HPP
