#ifndef CPP_BOOTCAMP_SCAVTRAP_HPP
#define CPP_BOOTCAMP_SCAVTRAP_HPP
#include <iostream>

class	ScavTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap &		operator=(ScavTrap const & rhs);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer();

private:
	int					_hitPoints;
	int const			_maxHPoints;
	int					_energie;
	int const			_maxEPoints;
	unsigned int		_level;
	std::string	const	_name;
	unsigned int const	_melee;
	unsigned int const	_ranged;
	unsigned int const	_armor;
};

#endif //CPP_BOOTCAMP_SCAVTRAP_HPP
