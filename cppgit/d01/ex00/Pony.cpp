#include "Pony.hpp"

Pony::Pony(std::string color, std::string name){
    this->_color = color;
    this->_name = name;
    std::cout << "The " << this->_color << " pony " << this->_name << " is born" << std::endl;
    return;
}

Pony::~Pony(){
    std::cout << "The " << this->_color << " pony " << this->_name << " died" << std::endl;
}

void Pony::setLogin(std::string login){
    this->login = login;
}

std::string Pony::getLogin(){
    return this->login;
}
