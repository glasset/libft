#include "FragTrap.hpp"
#include <cstdlib>
void FragTrap::init(std::string name){
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

FragTrap::FragTrap(void)
{
	std::cout << "Constuctor called" << std::endl;
	this->init("noName");
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Constuctor called" << std::endl;
	this->init(name);
}

FragTrap::FragTrap(FragTrap const & p_FragTrap)
{
	std::cout << "Constuctor called" << std::endl;
	*this = p_FragTrap;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & src)
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

void	FragTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->name <<" attacks " <<  target << " at range, causing " << this->rangedAD <<  " points of damage !" << std::endl;
}
void	FragTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->name <<" attacks " <<  target  << " at close range, causing " <<  this->meleeAD << " points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount){
	this->hitPoints = this->hitPoints + this->reducArmor - amount;
	if (this->hitPoints < 0 )
		this->hitPoints = 0;
	std::cout << "hitPoints after damage: " << this->hitPoints << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount){
	if ((this->hitPoints + amount) <= this->maxHitPoints){
		this->hitPoints += amount;
	}
	else{
		this->hitPoints = this->maxHitPoints;
	}
	std::cout << "hitPoints after heal: " << this->hitPoints << std::endl;

}

void	FragTrap::vaulthunter_dot_exe(std::string const & target){
	this->energyPoints -= 25;
	int i = std::rand() % 6;
	const char *name[] = {"titi", "tutu", "tete", "tyty", "tata", "toto"};
	if (this->energyPoints >= 0){
		std::cout << "FR4G-TP " << this->name <<" launch attacks " << name[i] << " " <<  target << " at close range, causing " <<  this->rangedAD << " points of damage !" << std::endl;
	}
	else{
		std::cout << "not enought energy points" << std::endl;
		this->energyPoints = 0;
	}
}
