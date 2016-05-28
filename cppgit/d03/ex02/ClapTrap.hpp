#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{

	protected:
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
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap(void);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap &	operator=(ClapTrap const & p_ClapTrap);
};

#endif /* !FRAGTRAP_HPP */

