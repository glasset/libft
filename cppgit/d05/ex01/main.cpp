#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){
	Bureaucrat	tete = Bureaucrat("tete", 150);
	Bureaucrat	tutu = Bureaucrat("tutu", 1);
	try {
		Form		slaut2 = Form("p2", 0, 155);
		std::cout << slaut2 << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {
		Form		slaut = Form("p1", 1, 150);
		std::cout << slaut << std::endl;
		std::cout << std::endl;
		std::cout << tete ;
		try{
			slaut.beSigned(tete);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << tutu;
		try {
			slaut.beSigned(tutu);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	return 0;
}
