#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target); 
		PresidentialPardonForm(const PresidentialPardonForm &next);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &next);
		~PresidentialPardonForm();
		void execute(const Bureaucrat &bureaucrat) const;
};

#endif