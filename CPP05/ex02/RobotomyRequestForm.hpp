#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target); 
		RobotomyRequestForm(const RobotomyRequestForm &next);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &next);
		~RobotomyRequestForm();
		void execute(const Bureaucrat &bureaucrat) const;
};

#endif