#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5)
{
	this->_target = "default";
}

PresidentialPardonForm :: PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm :: PresidentialPardonForm(const PresidentialPardonForm &next) : AForm(next)
{
	this->_target = next._target;
}

PresidentialPardonForm &PresidentialPardonForm :: operator=(const PresidentialPardonForm &next)
{
	if (this != &next)
		this->_target = next._target;
	return (*this);
}

PresidentialPardonForm :: ~PresidentialPardonForm() {}

void PresidentialPardonForm :: execute(const Bureaucrat &bureaucrat) const
{
	if (!this->is_it_signed())
		throw AForm::FormNotSignedException();
	else if (bureaucrat.getGrade() > this->get_grade_to_execute())
		throw AForm::GradeTooLowException();

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}