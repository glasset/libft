#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "ClapTrap demonstration" << std::endl;
	ClapTrap clapTrap("ClapTrap");
	ClapTrap clapTrap2(clapTrap);

	clapTrap.rangedAttack("Dr Zed");
	clapTrap.meleeAttack("Dr Zed");
	clapTrap.takeDamage(20);
	clapTrap.takeDamage(100);
	clapTrap.beRepaired(30);
	clapTrap.beRepaired(80);

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

	std::cout << std::endl << "ScavTrap demonstration" << std::endl;
	ScavTrap scavTrap("ScavTrap");
	ScavTrap scavTrap2(scavTrap);

	scavTrap.rangedAttack("Dr Zed");
	scavTrap.meleeAttack("Dr Zed");
	scavTrap.takeDamage(20);
	scavTrap.takeDamage(100);
	scavTrap.beRepaired(30);
	scavTrap.beRepaired(80);

	for (int i = 0; i < 5; i ++)
		scavTrap.challengeNewcomer();
	return (0);
}
