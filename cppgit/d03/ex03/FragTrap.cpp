#include "FragTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Constuctor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)

{
		std::cout << "Constuctor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & p_FragTrap) : ClapTrap(p_FragTrap)
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
