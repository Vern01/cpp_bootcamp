#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Oops! " << this->_name << ": Look out everybody! Things are about to get awesome!" << std::endl;
	_hitPoints = 100;
	_maxHPoints = 100;
	_energie = 100;
	_maxEPoints = 100;
	_level = 1;
	_melee = 30;
	_ranged = 20;
	_armor = 5;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << ": Look out everybody! Things are about to get awesome!" << std::endl;
	_hitPoints = 100;
	_maxHPoints = 100;
	_energie = 100;
	_maxEPoints = 100;
	_level = 1;
	_melee = 30;
	_ranged = 20;
	_armor = 5;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs)
{
	this->_hitPoints = rhs._hitPoints;
	this->_maxHPoints = rhs._maxHPoints;
	this->_energie = rhs._energie;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_melee = rhs._melee;
	this->_ranged = rhs._ranged;
	this->_armor = rhs._armor;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << ": Has left the server!" << std::endl;
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