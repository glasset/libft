#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie{

    private:
        std::string type;
        std::string name;
    public:
        Zombie(std::string name, std::string type);
        void announce();
};


#endif
