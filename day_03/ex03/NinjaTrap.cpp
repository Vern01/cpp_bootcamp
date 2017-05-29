#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap() {
	_hitPoints = 100;
	_maxHPoints = 100;
	_energie = 100;
	_maxEPoints = 100;
	_level = 1;
	_melee = 30;
	_ranged = 20;
	_armor = 5;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_maxHPoints = 100;
	_energie = 100;
	_maxEPoints = 100;
	_level = 1;
	_melee = 30;
	_ranged = 20;
	_armor = 5;
}

NinjaTrap::~NinjaTrap() {

}

NinjaTrap::NinjaTrap(NinjaTrap const &src) {
	*this = src;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {
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

void NinjaTrap::ninjaShoebox(NinjaTrap & target) {
	std::cout << "Threw a knife at " << target._name << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & target) {
	std::cout << "Threw a knife at " << target._name << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & target) {
	std::cout << "Threw a knife at " << target._name << std::endl;
}