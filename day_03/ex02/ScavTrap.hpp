#ifndef CPP_BOOTCAMP_SCAVTRAP_HPP
#define CPP_BOOTCAMP_SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap &		operator=(ScavTrap const & rhs);

	void		challengeNewcomer();
};

#endif //CPP_BOOTCAMP_SCAVTRAP_HPP
