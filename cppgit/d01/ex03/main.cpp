#include "ZombieHorde.hpp"

int main(){

    ZombieHorde* dead = new ZombieHorde(42);
    dead->announce();
    delete dead;
    return 0;
}
