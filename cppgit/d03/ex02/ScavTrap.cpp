#include "ScavTrap.hpp"
#include <cstdlib>
ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = "noName";
	this->meleeAD = 20;
	this->rangedAD = 15;
	this->reducArmor = 3;
	std::cout << "Constuctor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = name;
	this->meleeAD = 20;
	this->rangedAD = 15;
	this->reducArmor = 3;
	std::cout << "Constuctor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & p_ScavTrap) : ClapTrap(p_ScavTrap)
{
	std::cout << "Constuctor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src)
{
	this->hitPoints = src.hitPoints;
	this->maxHitPoints = src.maxHitPoints;
	this->energyPoints = src.energyPoints;
	this->maxEnergyPoints = src.maxEnergyPoints;
	this->level = src.level;
	this->name = src.name;
	this->meleeAD = src.meleeAD;
	this->rangedAD = src.rangedAD;
	this->reducArmor = src.reducArmor;

	return *this;
}

void	ScavTrap::challengeNewcomer(){
	int i = std::rand() % 6;
	const char *name[] = {"titi", "tutu", "tete", "tyty", "tata", "toto"};
	std::cout << this->name << " challenge Francois and "<< name[i] << std::endl;
}
