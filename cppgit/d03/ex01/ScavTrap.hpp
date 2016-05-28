#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
class ScavTrap
{

	private:
		int	hitPoints;
		unsigned int	maxHitPoints;
		int	energyPoints;
		unsigned int	maxEnergyPoints;
		unsigned int	level;
		std::string		name;
		unsigned int	meleeAD;
		unsigned int	rangedAD;
		unsigned int	reducArmor;
		void init(std::string name);

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ScavTrap &	operator=(ScavTrap const & p_ScavTrap);
	void challengeNewcomer();
};

#endif /* !SCAVTRAP_HPP */

