#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class	FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap &		operator=(FragTrap const & rhs);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string &target);

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

#endif
