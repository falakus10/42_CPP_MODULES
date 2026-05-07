#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target); 
		ShrubberyCreationForm(const ShrubberyCreationForm &next);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &next);
		~ShrubberyCreationForm();
		void execute(const Bureaucrat &bureaucrat) const;
};	

#endif