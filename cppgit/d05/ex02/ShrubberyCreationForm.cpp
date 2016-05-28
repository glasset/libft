#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>  


ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137){

}

ShrubberyCreationForm::ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	Form::operator=(src);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::string fileN = this->getName() + "_shrubbery";
	if (this->getAuth() && executor.getGrade() <= this->getExecGrade()){
		std::ofstream outfile (fileN.c_str());
		outfile <<
			"       ###\n" <<
			"      #o###\n" <<
			"    #####o###\n" <<
			"   #o#\\#|#/###\n" <<
			"    ###\\|/#o#\n" <<
			"     # }|{  #\n" <<
			"       }|{\n" <<
			"\n" <<
			"       ###\n" <<
			"      #o###\n" <<
			"    #####o###\n" <<
			"   #o#\\#|#/###\n" <<
			"    ###\\|/#o#\n" <<
			"     # }|{  #\n" <<
			"       }|{\n"
			<< std::endl;
		outfile.close();
	}
	else{
		throw Form::PermissionDenied();
	}
}
