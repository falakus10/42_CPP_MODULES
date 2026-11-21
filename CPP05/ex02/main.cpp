#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
	Bureaucrat bureaucrat("John Doe", 1);
	ShrubberyCreationForm shrubbery("home");
	RobotomyRequestForm robotomy("Bender");
	PresidentialPardonForm pardon("Alice");

	bureaucrat.signForm(shrubbery);
	bureaucrat.executeForm(shrubbery);

	bureaucrat.signForm(robotomy);
	bureaucrat.executeForm(robotomy);

	bureaucrat.signForm(pardon);
	bureaucrat.executeForm(pardon);

	return 0;
}
