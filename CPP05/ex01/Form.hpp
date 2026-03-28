#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureacurat;

class Form
{
	private:
		const std::string	form_name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
	public:
		Form();
		Form(std::string name, const int sign_grade, const int execute_grade);
		Form(const Form &next);
		Form& operator=(const Form &next);
		~Form();
		std::string getName() const;
		bool is_it_signed();
		void be_signed(const Bureaucrat &bureaucrat);
		int get_grade_to_sign() const;
		int get_grade_to_execute() const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &os, Form &next);

#endif