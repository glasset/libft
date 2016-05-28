#include "Bureaucrat.hpp"

int	main(){
	try{
		Bureaucrat	toto = Bureaucrat("tata", 151);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	titi = Bureaucrat("titi", 0);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	tata = Bureaucrat("tata", 9);
		std::cout << tata;
		tata++;
		std::cout << tata;
		tata--;
		std::cout << tata;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	tutu = Bureaucrat("tutu", 1);
		std::cout <<std::endl;
		std::cout << tutu;
		tutu++;
		std::cout << tutu;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	tete = Bureaucrat("tete", 150);
		std::cout <<std::endl;
		std::cout << tete;
		tete--;
		std::cout << tete;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
