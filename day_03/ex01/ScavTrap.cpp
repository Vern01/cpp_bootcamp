#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _hitPoints(100), _maxHPoints(100), _energie(50), _maxEPoints(50), _level(1), _name("No_Name"), _melee(15), _ranged(20), _armor(3)
{
	std::cout << "Oops! " << this->_name << ": This is going to end badly." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHPoints(100), _energie(50), _maxEPoints(50), _level(1), _name(name) , _melee(15), _ranged(20), _armor(3)
{
	std::cout << this->_name << ": This is going to end badly." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : _hitPoints(src._hitPoints), _maxHPoints(src._maxHPoints), _energie(src._energie), _maxEPoints(src._maxEPoints), _level(src._level), _name(src._name) , _melee(src._melee), _ranged(src._ranged), _armor(src._ranged)
{
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_hitPoints = rhs._hitPoints;
	this->_energie = rhs._energie;
	this->_level = rhs._level;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << ": Has rage quited." << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " softly range attacks " << target << " [-" << this->_ranged << "]" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " feather melee attacks " << target << " [-" << this->_melee << "]" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount - this->_armor;
	if (this->_hitPoints <  0)
		this->_hitPoints = 0;
	std::cout << this->_name << ": Extra ouch!" << "[ "<< this->_hitPoints << "hp ]" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHPoints)
		this->_hitPoints = this->_maxHPoints;
	std::cout << this->_name << ": Health! Eww, what flavor is red? [ " << this->_hitPoints << "hp ]" << std::endl;
}

void ScavTrap::challengeNewcomer() {
	int attack_no = std::rand() % 5;
	std::string attacks[] = {"How many mama jokes can you do in a minute? Non, because you wont ge any..", "Touch your nose with your elbow!", "Crack a Claris joke!", "One to kill himself first wins!!", "One to find Claris first wins??"};
	std::cout << attacks[attack_no] << std::endl;
}