#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"
#include <stdexcept>
#include <iostream>
class Form
{
	private:
		const std::string name;
		bool		auth;
		const int	signGrade;
		const int	execGrade;
		int check(int checkI);
	public:
		Form(void);
		class GradeTooHighException : public std::exception{
			private:
				GradeTooHighException & operator=(GradeTooHighException const &src);
			public:
				GradeTooHighException(GradeTooHighException const &src);
				GradeTooHighException();
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			private:
				GradeTooLowException & operator=(GradeTooLowException const &src);
			public:
				GradeTooLowException(GradeTooLowException const &src);
				GradeTooLowException();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};
		class PermissionDenied : public std::exception{
			private:
				PermissionDenied & operator=(PermissionDenied const &src);
			public:
				PermissionDenied(PermissionDenied const &src);
				PermissionDenied();
				virtual ~PermissionDenied() throw();
				virtual const char* what() const throw();
		};
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const & src);
		~Form(void);
		std::string	getName() const;
		bool	getAuth() const;
		int		getSignGrade() const;
		int		getExecGrade() const;
		Form &	operator=(Form const & src);
		void beSigned(Bureaucrat const & user);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream &o, Form const &src);
#endif 

