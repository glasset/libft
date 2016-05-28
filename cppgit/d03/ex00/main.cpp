#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << std::endl << "FragTrap demonstration" << std::endl;
	FragTrap fragTrap("FragTrap");
	FragTrap fragTrap2(fragTrap);

	fragTrap.rangedAttack("Dr Zed");
	fragTrap.meleeAttack("Dr Zed");
	fragTrap.takeDamage(20);
	fragTrap.takeDamage(100);
	fragTrap.beRepaired(30);
	fragTrap.beRepaired(80);

	for (int i = 0; i < 5; i ++)
		fragTrap.vaulthunter_dot_exe("Dr Zed");
	return (0);
}
