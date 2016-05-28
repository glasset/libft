#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);
	FragTrap &	operator=(FragTrap const & p_FragTrap);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif /* !FRAGTRAP_HPP */

