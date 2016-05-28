#include "ClapTrap.hpp"
#include <cstdlib>
void ClapTrap::init(std::string name){
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = name;
	this->meleeAD = 30;
	this->rangedAD = 20;
	this->reducArmor = 5;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Constuctor ClapTrap called" << std::endl;
	this->init("noName");
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constuctor ClapTrap called" << std::endl;
	this->init(name);
}

ClapTrap::ClapTrap(ClapTrap const & p_ClapTrap)
{
	std::cout << "Constuctor ClapTrap called" << std::endl;
	*this = p_ClapTrap;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src)
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

void	ClapTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->name <<" attacks " <<  target << " at range, causing " << this->rangedAD <<  " points of damage !" << std::endl;
}
void	ClapTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->name <<" attacks " <<  target  << " at close range, causing " <<  this->meleeAD << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
		this->hitPoints = this->hitPoints + this->reducArmor - amount;
	if (this->hitPoints < 0 )
		this->hitPoints = 0;
	std::cout << "hitPoints after damage: " << this->hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if ((this->hitPoints + amount) <= this->maxHitPoints){
		this->hitPoints += amount;
	}
	else{
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << "hitPoints after heal: " << this->hitPoints << std::endl;

}

