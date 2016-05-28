#ifndef __ZOMBIEHORDE_HPP__
# define __ZOMBIEHORDE_HPP__

#include "Zombie.hpp"

class ZombieHorde{
    private:
        int    size;
        Zombie* zombie;
    public:
        ZombieHorde(int  size);
        ~ZombieHorde();
        void announce();
};

#endif
