#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
class Form;

class Bureaucrat
{
	private:
		Bureaucrat(void);
		const std::string		name;
		int				grade;
	public:
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
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);
		Bureaucrat & operator++(int);
		Bureaucrat & operator--(int);
		std::string getName() const;
		int	getGrade() const;
		Bureaucrat &	operator=(Bureaucrat const & src);
		void signForm(bool val, std::string form) const;
		void executeForm(Form const & form) ;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &src);

#endif 

