#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm :: ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = "default";
}

ShrubberyCreationForm :: ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm :: ShrubberyCreationForm(const ShrubberyCreationForm &next) : AForm(next)
{
	this->_target = next._target;
}

ShrubberyCreationForm &ShrubberyCreationForm :: operator=(const ShrubberyCreationForm &next)
{
	if (this != &next)
		this->_target = next._target;
	return (*this);
}

ShrubberyCreationForm :: ~ShrubberyCreationForm() {}

void ShrubberyCreationForm :: execute(const Bureaucrat &bureaucrat) const
{
	if (!this->is_it_signed())
		throw AForm::FormNotSignedException();
	else if (bureaucrat.getGrade() > this->get_grade_to_execute())
		throw AForm::GradeTooLowException();

	std::ofstream outfile((this->_target + "_shrubbery").c_str());
	if (!outfile)
	{
		std::cerr << "Error: Could not create file." << std::endl;
		return;
	}

	outfile << "       _-_" << std::endl;
	outfile << "    /~~   ~~\\" << std::endl;
	outfile << " /~~         ~~\\" << std::endl;
	outfile << "{               }" << std::endl;
	outfile << " \\  _-     -_  /" << std::endl;
	outfile << "   ~  \\\\ //  ~" << std::endl;
	outfile << "_- -   | | _- _" << std::endl;
	outfile << "  _ -  | |   -_" << std::endl;
	outfile << "      // \\\\" << std::endl;

	outfile.close();
}