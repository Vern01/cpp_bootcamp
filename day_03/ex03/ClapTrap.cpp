#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("No_Name"), _hitPoints(100), _maxHPoints(100), _energie(100), _maxEPoints(100), _level(1), _melee(30), _ranged(20), _armor(5)
{
	std::cout << "Oops! " << this->_name << " Constructed." << std::endl;
}

ClapTrap::ClapTrap(std::string name) :  _name(name), _hitPoints(100), _maxHPoints(100), _energie(100), _maxEPoints(100), _level(1) , _melee(30), _ranged(20), _armor(5)
{
	std::cout << this->_name << ": Constructed." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name), _hitPoints(src._hitPoints), _maxHPoints(src._maxHPoints), _energie(src._energie), _maxEPoints(src._maxEPoints), _level(src._level), _melee(src._melee), _ranged(src._ranged), _armor(src._ranged)
{
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs)
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

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << ": Destruct" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " range attacks " << target << " [-" << this->_ranged << "]" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " melee attacks " << target << " [-" << this->_melee << "]" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount - this->_armor;
	if (this->_hitPoints <  0)
		this->_hitPoints = 0;
	std::cout << this->_name << ": I can't feel my fingers! Gah! I don't have any fingers!" << "[ "<< this->_hitPoints << "hp ]" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHPoints)
		this->_hitPoints = this->_maxHPoints;
	std::cout << this->_name << ": Healsies! [ " << this->_hitPoints << "hp ]" << std::endl;
}