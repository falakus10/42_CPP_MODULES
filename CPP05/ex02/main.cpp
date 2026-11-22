#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
	srand(time(NULL));
	Bureaucrat president("Zaphod", 1);
	Bureaucrat manager("Ford", 40);
	Bureaucrat intern("Arthur", 140);
	std::cout << "---------------- TESTS -----------------" << std::endl;

	ShrubberyCreationForm unsignedForm("garden");
	president.executeForm(unsignedForm);

	PresidentialPardonForm pardon("Trillian");
	president.signForm(pardon);
	manager.executeForm(pardon);
	intern.executeForm(pardon);
	president.executeForm(pardon);

	RobotomyRequestForm robotomy("Bender");
	intern.signForm(robotomy);
	manager.signForm(robotomy);
	for (int i = 0; i < 4; i++)
		manager.executeForm(robotomy);

	ShrubberyCreationForm shrubbery("home");
	intern.signForm(shrubbery);
	intern.executeForm(shrubbery);
	manager.executeForm(shrubbery);

	AForm *polyForm = new PresidentialPardonForm("Marvin");
	president.signForm(*polyForm);
	president.executeForm(*polyForm);
	delete polyForm;
	std::cout << "---------------- DESTRUCTORS -----------------" << std::endl;


	return 0;
}
