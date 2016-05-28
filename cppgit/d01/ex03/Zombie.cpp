#include "Zombie.hpp"
#include <cstdlib>

Zombie::Zombie(){
	const char *name[] = {"titi", "tutu", "tete", "tyty", "tata", "toto"};
	int i = std::rand() % 6;
	this->name = name[i];
    this->type = "doctor";
    return;
}

void    Zombie::announce(){
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}

