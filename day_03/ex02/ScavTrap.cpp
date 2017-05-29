#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Oops! " << this->_name << ": This is going to end badly." << std::endl;
	_hitPoints = 100;
	_maxHPoints = 100;
	_energie = 50;
	_maxEPoints = 50;
	_level = 1;
	_melee = 20;
	_ranged = 15;
	_armor = 3;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << ": This is going to end badly." << std::endl;
	_hitPoints = 100;
	_maxHPoints = 100;
	_energie = 50;
	_maxEPoints = 50;
	_level = 1;
	_melee = 20;
	_ranged = 15;
	_armor = 3;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
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

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << ": Has rage quited." << std::endl;
}

void ScavTrap::challengeNewcomer() {
	int attack_no = std::rand() % 5;
	std::string attacks[] = {"How many mama jokes can you do in a minute? Non, because you wont ge any..", "Touch your nose with your elbow!", "Crack a Claris joke!", "One to kill himself first wins!!", "One to find Claris first wins??"};
	std::cout << attacks[attack_no] << std::endl;
}