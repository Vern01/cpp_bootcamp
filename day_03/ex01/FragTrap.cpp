#include "FragTrap.hpp"

FragTrap::FragTrap() : _hitPoints(100), _maxHPoints(100), _energie(100), _maxEPoints(100), _level(1), _name("No_Name"), _melee(30), _ranged(20), _armor(5) 
{
	std::cout << "Oops! " << this->_name << ": Look out everybody! Things are about to get awesome!" << std::endl;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHPoints(100), _energie(100), _maxEPoints(100), _level(1), _name(name) , _melee(30), _ranged(20), _armor(5)
{
	std::cout << this->_name << ": Look out everybody! Things are about to get awesome!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : _hitPoints(src._hitPoints), _maxHPoints(src._maxHPoints), _energie(src._energie), _maxEPoints(src._maxEPoints), _level(src._level), _name(src._name) , _melee(src._melee), _ranged(src._ranged), _armor(src._ranged)
{
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs)
{
	FragTrap trap(rhs);
	*this = trap;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << ": Has left the server!" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " range attacks " << target << " [-" << this->_ranged << "]" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " melee attacks " << target << " [-" << this->_melee << "]" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount - this->_armor;
	if (this->_hitPoints <  0)
		this->_hitPoints = 0;
	std::cout << this->_name << ": I can't feel my fingers! Gah! I don't have any fingers!" << "[ "<< this->_hitPoints << "hp ]" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHPoints)
		this->_hitPoints = this->_maxHPoints;
	std::cout << this->_name << ": Healsies! [ " << this->_hitPoints << "hp ]" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string &target) {
	int attack_no = std::rand() % 5;
	std::string attacks[] = {"Dick Slap", "Bomb Shock", "Claris", "Yoyo Recker", "Dongle"};
	if (_energie <= 0) {
		_energie = 0;
		std::cout << _name << ": Ammo reserves are spent!" << std::endl;
	} else {
		std::cout << _name << " used special attack on " << target << " : " << attacks[attack_no] << std::endl;
		_energie -= 25;
	}
}