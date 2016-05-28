#include "ZombieEvent.hpp"

int main(){
    ZombieEvent toto = ZombieEvent();

    toto.setZombieType("wd");
    Zombie* tata = toto.newZombie("cirasa");
    tata->announce();
    for(int i = 0; i < 10; i++){
        Zombie x = toto.randomChump();
        x.announce();
    }
    delete tata;
    return 0;
}
