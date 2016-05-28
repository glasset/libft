#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
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

	std::cout << std::endl << "NinjaTrap demonstration" << std::endl;
	NinjaTrap ninjaTrap("NinjaTrap");
	NinjaTrap ninjaTrap2(ninjaTrap);

	ninjaTrap.rangedAttack("Dr Zed");
	ninjaTrap.meleeAttack("Dr Zed");
	ninjaTrap.takeDamage(20);
	ninjaTrap.takeDamage(100);
	ninjaTrap.beRepaired(30);
	ninjaTrap.beRepaired(80);

	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(scavTrap);
	ninjaTrap.ninjaShoebox(ninjaTrap);

	return (0);
}
