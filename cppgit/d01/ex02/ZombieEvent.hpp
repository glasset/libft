#ifndef __ZOMBIEEVENT_HPP__
# define __ZOMBIEEVENT_HPP__

#include "Zombie.hpp"

class ZombieEvent{
    private:
        std::string type;
    public:
        Zombie* newZombie(std::string name);
        void    setZombieType(std::string type);
        Zombie randomChump();
};
#endif
