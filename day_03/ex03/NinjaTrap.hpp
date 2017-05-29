#ifndef CPP_BOOTCAMP_NINJATRAP_HPP
#define CPP_BOOTCAMP_NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & claptrap);
	NinjaTrap & operator=(NinjaTrap const & rhs);
	~NinjaTrap();

	void ninjaShoebox(NinjaTrap & target);
	void ninjaShoebox(ScavTrap & target);
	void ninjaShoebox(FragTrap & target);
};

#endif //CPP_BOOTCAMP_NINJATRAP_HPP
