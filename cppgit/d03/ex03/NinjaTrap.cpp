#include "NinjaTrap.hpp"
#include <cstdlib>
NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = "noName";
	this->meleeAD = 60;
	this->rangedAD = 5;
	this->reducArmor = 0;
	std::cout << "Constuctor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = name;
	this->meleeAD = 60;
	this->rangedAD = 5;
	this->reducArmor = 0;
	std::cout << "Constuctor called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & p_NinjaTrap) : ClapTrap(p_NinjaTrap)
{
	std::cout << "Constuctor called" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & src)
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

void	NinjaTrap::ninjaShoebox(FragTrap const &opp){
 std::cout << "FragTrap: "  << opp.name << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &opp){
 std::cout << "ScavTrap: "  << opp.name << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const &opp){
 std::cout << "NinjaTrap: " << opp.name << std::endl;
}
