#ifndef CONTACT_CLASS
# define CONTACT_CLASS

#include <iostream>
class Contact{
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string login;
	std::string address;
	std::string email;
	std::string phone;
	std::string date;
	std::string favoriteMeal;
	std::string color;
	std::string secret;

public:
	std::string getFirstName();
	void setFirstName(std::string firstName);

	std::string getLastName();
	void setLastName(std::string lastName);

	std::string getNickName();
	void setNickName(std::string nickName);

	std::string getLogin();
	void setLogin(std::string login);

	std::string getAddress();
	void setAddress(std::string address);

	std::string getEmail();
	void setEmail(std::string email);

	std::string getPhone();
	void setPhone(std::string phone);

	std::string getDate();
	void setDate(std::string date);

	std::string getFavoriteMeal();
	void setFavoriteMeal(std::string favoriteMeal);

	std::string getColor();
	void setColor(std::string color);

	std::string getSecret();
	void setSecret(std::string secret);
};

#endif
