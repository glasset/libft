#include "Bureaucrat.hpp"

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &src){
	(void)src;
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src){
	(void)src;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "GradeTooLowException call";
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src){
	(void)src;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &src){
	(void)src;
	return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "GradeTooHighException call";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
	if (grade < 1 ){
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150){
		throw Bureaucrat::GradeTooLowException();
	}
	else{
		this->grade = grade;
	}
}

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : name(src.getName())
{
	this->grade = src.getGrade();
}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & src)
{
	Bureaucrat* op = new Bureaucrat(src.getName(), src.getGrade());
	return *op;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

int		Bureaucrat::getGrade() const{
	return this->grade;
}

Bureaucrat & Bureaucrat::operator++(int){
	try
	{
		if (this->grade - 1 < 1 ){
			throw Bureaucrat::GradeTooHighException();
		}
		else{
			std::cout << "upgrade" << std::endl;
			this->grade--;
		}
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	return *this;
}

Bureaucrat & Bureaucrat::operator--(int){
	try
	{
		if (this->grade + 1 >  150){
			throw Bureaucrat::GradeTooLowException();
		}
		else{
			std::cout << "downgrade" << std::endl;
			this->grade++;
		}
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & f){

	o << f.getName() << ", bureaucrat grade " << f.getGrade() << "." << std::endl;
	return o;
}
