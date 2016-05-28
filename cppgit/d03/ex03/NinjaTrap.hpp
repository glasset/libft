#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include "ClapTrap.hpp"
class NinjaTrap : public ClapTrap
{

	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);
		NinjaTrap &	operator=(NinjaTrap const & p_NinjaTrap);
		void	ninjaShoebox(FragTrap const &opp);
		void	ninjaShoebox(ScavTrap const &opp);
		void	ninjaShoebox(NinjaTrap const &opp);

};

#endif /* !SCAVTRAP_HPP */

