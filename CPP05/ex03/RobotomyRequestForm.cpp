#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45)
{
	this->_target = "default";
}

RobotomyRequestForm :: RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm :: RobotomyRequestForm(const RobotomyRequestForm &next) : AForm(next)
{
	this->_target = next._target;
}

RobotomyRequestForm &RobotomyRequestForm :: operator=(const RobotomyRequestForm &next)
{
	if (this != &next)
		this->_target = next._target;
	return (*this);
}

RobotomyRequestForm :: ~RobotomyRequestForm() {}

void RobotomyRequestForm :: execute(const Bureaucrat &bureaucrat) const
{
	if (!this->is_it_signed())
		throw AForm::FormNotSignedException();
	else if (bureaucrat.getGrade() > this->get_grade_to_execute())
		throw AForm::GradeTooLowException();
	std::cout << "Bzzzzzz... ";
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->_target << " robotomy failed." << std::endl;
}
