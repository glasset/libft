#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);
		virtual void execute(Bureaucrat const & executor) const;
		PresidentialPardonForm &	operator=(PresidentialPardonForm const & src);

};

#endif

