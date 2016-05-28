#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap &	operator=(ScavTrap const & p_ScavTrap);
		void challengeNewcomer();
};

#endif /* !SCAVTRAP_HPP */

