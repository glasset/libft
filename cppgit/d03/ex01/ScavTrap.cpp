#include "ScavTrap.hpp"
#include <cstdlib>
void ScavTrap::init(std::string name){
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = name;
	this->meleeAD = 20;
	this->rangedAD = 15;
	this->reducArmor = 3;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "Constuctor called" << std::endl;
	this->init("noName");
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Constuctor called" << std::endl;
	this->init(name);
}

ScavTrap::ScavTrap(ScavTrap const & p_ScavTrap)
{
	std::cout << "Constuctor called" << std::endl;
	*this = p_ScavTrap;
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

void	ScavTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->name <<" attacks " <<  target << " at range, causing " << this->rangedAD <<  " points of damage !" << std::endl;
}
void	ScavTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->name <<" attacks " <<  target  << " at close range, causing " <<  this->meleeAD << " points of damage !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
	this->hitPoints = this->hitPoints + this->reducArmor - amount;
	if (this->hitPoints < 0 )
		this->hitPoints = 0;
	std::cout << "hitPoints after damage: " << this->hitPoints << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount){
	if ((this->hitPoints + amount) <= this->maxHitPoints){
		this->hitPoints += amount;
	}
	else{
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << "hitPoints after heal: " << this->hitPoints << std::endl;
}

void	ScavTrap::challengeNewcomer(){
	int i = std::rand() % 6;
	const char *name[] = {"titi", "tutu", "tete", "tyty", "tata", "toto"};
	std::cout << this->name << " challenge Francois and "<< name[i] << std::endl;
}
