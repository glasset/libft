#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45){
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(void)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src)
{

}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	Form::operator=(src);
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	int i = std::rand() % 2;
	const char *name[] = {" has been robotomized successfully.", 
		"try to robotomized but it's a failure."};
	if (this->getAuth() && executor.getGrade() <= this->getExecGrade()){
		std::cout << "\a\a\a\a" << this->getName() << name[i] << std::endl;
	}
	else{
		throw Form::PermissionDenied();
	}
}
