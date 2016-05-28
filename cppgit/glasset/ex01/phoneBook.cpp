#include <iostream>
#include "contact.hpp"

int				ft_strcmp(std::string str, std::string cmp){
	int			i = 0;
	while (str[i] || cmp[i]){
		if (str[i] != cmp[i])
			return 0;
		i++;
	}
	if (cmp[i] != '\0')
		return 0;
	return 1;
}

void		trunc(std::string str){
	int			i = 0;
	std::string	trunc;
	while (str[i]){
		i++;
	}
	while (10 - i > 0){
		std::cout << ' ';
		i++;
	}
	i = 0;
	while (str[i]){
		if (i == 9 && str[i + 1]){
			std::cout << '.';
			return;
		}
		else {
			std::cout << str[i];
		}
		i++;
	}
	return ;
}


int				main(){
	Contact		repo[8];
	std::string	str;
	int	i = 0;
	while (std::cin){
		std::cin >> str;
		if (ft_strcmp(str, "EXIT"))
			return 0;
		else if (ft_strcmp(str, "ADD")){
			if (i >= 8){
				std::cout << "Too many contacts, too famous" << std::endl;
			}
			else {
				Contact cnt = repo[i];
				std::cout << "first name:" << std::endl;
				std::cin >> str;
				cnt.setFirstName(str);
				std::cout << "last name:" << std::endl;
				std::cin >> str;
				cnt.setLastName(str);
				std::cout << "nickname:" << std::endl;
				std::cin >> str;
				cnt.setNickName(str);
				std::cout << "login:" << std::endl;
				std::cin >> str;
				cnt.setLogin(str);
				std::cout << "address:" << std::endl;
				std::cin >> str;
				cnt.setAddress(str);
				std::cout << "email:" << std::endl;
				std::cin >> str;
				cnt.setEmail(str);
				std::cout << "phone:" << std::endl;
				std::cin >> str;
				cnt.setPhone(str);
				std::cout << "birthday date:" << std::endl;
				std::cin >> str;
				cnt.setDate(str);
				std::cout << "favorite Meal:" << std::endl;
				std::cin >> str;
				cnt.setFavoriteMeal(str);
				std::cout << "underwear color:" << std::endl;
				std::cin >> str;
				cnt.setColor(str);
				std::cout << "darkest secret:" << std::endl;
				std::cin >> str;
				cnt.setSecret(str);
				repo[i] = cnt;
				i++;
			}
		}
		else if (ft_strcmp(str, "SEARCH")){
			int atm = 0;
			while (atm < i ){
				Contact cnt = repo[atm];
				std::cout << "         " <<  atm  << "|";
				trunc(cnt.getFirstName());
				std::cout << "|";
				trunc(cnt.getLastName());
				std::cout << "|";
				trunc(cnt.getNickName());
				std::cout << std::endl;
				atm++;
			}
			std::cout << "Index:" << std::endl;
			std::cin >> str;
			if (str[0] >= '0' && str[0] <= '9' && (str[0] - '0') < i){
				Contact cnt = repo[str[0] - '0'];
				std::cout << "first name:" << cnt.getFirstName() << std::endl;
				std::cout << "last name:" << cnt.getLastName() << std::endl;
				std::cout << "nickname:" << cnt.getNickName() << std::endl;
				std::cout << "login:" << cnt.getLogin() << std::endl;
				std::cout << "address:" << cnt.getAddress() << std::endl;
				std::cout << "email:" << cnt.getEmail() << std::endl;
				std::cout << "phone:" << cnt.getPhone() << std::endl;
				std::cout << "birthday date:" << cnt.getDate() << std::endl;
				std::cout << "favorite meal:" << cnt.getFavoriteMeal() << std::endl;
				std::cout << "underwear color:" << cnt.getColor() << std::endl;
				std::cout << "darkest secret:" << cnt.getSecret() << std::endl;
			}
			else {
				std::cout << "Contact not found" << std::endl;
			}
		}
		else {
			std::cout << "Command not found" << std::endl;
		}
	}
	return 0;
}
