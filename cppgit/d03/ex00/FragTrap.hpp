#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
class FragTrap
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
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	FragTrap &	operator=(FragTrap const & p_FragTrap);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif /* !FRAGTRAP_HPP */

