#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie{

    private:
        std::string type;
        std::string name;
    public:
        Zombie();
        void announce();
};

#endif
