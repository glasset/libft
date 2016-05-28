#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5){

}

PresidentialPardonForm::PresidentialPardonForm(void)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	Form::operator=(src);
	 return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->getAuth() && executor.getGrade() <= this->getExecGrade())
		std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	else{
		throw Form::PermissionDenied();
	}
}
