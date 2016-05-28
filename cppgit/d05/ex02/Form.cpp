#include "Form.hpp"

int	Form::check(int checkI){
		if (checkI < 1 ){
			throw Form::GradeTooHighException();
		}
		else if (checkI > 150){
			throw Form::GradeTooLowException();
		}
		return checkI;
}

Form::Form(std::string name, int signGrade, int execGrade) : name(name), auth(0), signGrade(this->check(signGrade)), execGrade(this->check(execGrade)){
}

Form::Form(void) : name("no"), auth(0), signGrade(1), execGrade(150)
{

}

Form::Form(Form const & src) : name(src.getName()), auth(src.getAuth()), signGrade(src.getSignGrade()), execGrade(src.getExecGrade())
{

}

Form::~Form(void)
{

}

Form &	Form::operator=(Form const & src)
{
	(void)src;
	return *this;
}

std::string Form::getName() const{
	return this->name;
}

bool	Form::getAuth() const{
	return this->auth;
}

int		Form::getSignGrade() const{
	return this->signGrade;
}

int		Form::getExecGrade() const{
	return this->execGrade;
}

void	Form::beSigned(Bureaucrat const & user){
		if (user.getGrade() <= this->signGrade){
			this->auth = true;
			user.signForm(true, this->getName());
		}
		else{
			user.signForm(false, this->name);
			throw Form::GradeTooLowException();
		}
}

Form::PermissionDenied & Form::PermissionDenied::operator=(PermissionDenied const &src){
	(void)src;
	return *this;
}

Form::PermissionDenied::PermissionDenied(PermissionDenied const &src){
	(void)src;
}

Form::PermissionDenied::PermissionDenied(){
}

Form::PermissionDenied::~PermissionDenied() throw(){
}

const char* Form::PermissionDenied::what() const throw(){
	return "Form::Permission Denied call, not signed/not grade";
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const &src){
	(void)src;
	return *this;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src){
	(void)src;
}

Form::GradeTooLowException::GradeTooLowException(){
}

Form::GradeTooLowException::~GradeTooLowException() throw(){
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Form::GradeTooLowException call";
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src){
	(void)src;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const &src){
	(void)src;
	return *this;
}

Form::GradeTooHighException::GradeTooHighException(){
}

Form::GradeTooHighException::~GradeTooHighException() throw(){
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Form::GradeTooHighException call";
}

std::ostream &	operator<<(std::ostream & o, Form const & f){

	o << f.getName() << " form, grade required to sign it " << f.getSignGrade() << ", grade required to execute it " << f.getExecGrade() << std::endl;
	return o;
}

