#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int size){
	this->size = size;
	this->zombie = new Zombie[size];
	return;
}

void    ZombieHorde::announce(){
	for(int i = 0; i < this->size; i++){
		this->zombie[i].announce();
	}
}

ZombieHorde::~ZombieHorde(){
}
