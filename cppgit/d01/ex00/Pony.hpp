#ifndef __PONY_HPP__
# define __PONY_HPP__

#include <iostream>
#include <string>

class Pony{

    private:
        std::string _color;
        std::string _name;
        std::string login;
    public:
        Pony(std::string color, std::string name);
        ~Pony();
        void setLogin(std::string login);
        std::string getLogin();
};

#endif
