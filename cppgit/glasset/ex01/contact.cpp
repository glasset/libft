#include "contact.hpp"

std::string Contact::getFirstName(){
	return this->firstName;
}

void Contact::setFirstName(std::string firstName){
	this->firstName = firstName;
}

std::string Contact::getLastName(){
	return this->lastName;
}

void Contact::setLastName(std::string lastName){
	this->lastName = lastName;
}

std::string Contact::getNickName(){
	return this->nickName;
}
void Contact::setNickName(std::string nickName){
	this->nickName = nickName;
}

std::string Contact::getLogin(){
	return this->login;
}

void Contact::setLogin(std::string login){
	this->login = login;
}

std::string Contact::getAddress(){
	return this->address;
}

void Contact::setAddress(std::string address){
	this->address = address;
}

std::string Contact::getEmail(){
	return this->email;
}

void Contact::setEmail(std::string email){
	this->email = email;
}

std::string Contact::getPhone(){
	return this->phone;
}

void Contact::setPhone(std::string phone){
	this->phone = phone;
}

std::string Contact::getDate(){
	return this->date;
}

void Contact::setDate(std::string date){
	this->date = date;
}

std::string Contact::getFavoriteMeal(){
	return this->favoriteMeal;
}

void Contact::setFavoriteMeal(std::string favoriteMeal){
	this->favoriteMeal = favoriteMeal;
}

std::string Contact::getColor(){
	return this->color;
}

void Contact::setColor(std::string color){
	this->color = color;
}

std::string Contact::getSecret(){
	return this->secret;
}

void Contact::setSecret(std::string secret){
	this->secret = secret;
}
