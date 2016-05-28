#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){
	Bureaucrat	tutu = Bureaucrat("tutu", 1);
	RobotomyRequestForm toto = RobotomyRequestForm("jean");
	PresidentialPardonForm tata = PresidentialPardonForm("joujou");
	ShrubberyCreationForm tete = ShrubberyCreationForm("tree");

	tutu.executeForm(toto);
	toto.beSigned(tutu);
	tutu.executeForm(toto);
	
	tata.beSigned(tutu);
	tutu.executeForm(tata);

	tete.beSigned(tutu);
	tutu.executeForm(tete);
	return 0;
}


