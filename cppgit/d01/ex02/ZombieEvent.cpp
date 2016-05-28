#include "ZombieEvent.hpp"
#include <cstdlib>

void    ZombieEvent::setZombieType(std::string type){
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name){
    return new Zombie(name, this->type);
}

Zombie ZombieEvent::randomChump(){
    int i = std::rand() % 6;
    const char *name[] = {"titi", "tutu", "tete", "tyty", "tata", "toto"};
    return Zombie(name[i], "random");

}
